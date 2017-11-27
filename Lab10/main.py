import time


class WordList:

    def __init__(self):
        with open('wordsEn.txt') as f:
            self.lines = f.readlines()

    def contains(self, word):
        word_list = word.split()

        for each_wor in word_list:
            # if each_word + "\n" not in lines:
            if not self.search_list(each_wor + "\n"):
                return False
        return True

    def binary_search(self, word, word_list, lo, hi):
        while lo <= hi:
            mid = (lo + hi) // 2
            if word in word_list[mid]:
                return True
            elif word < word_list[mid]:
                hi = mid - 1
            else:
                lo = mid + 1
        return False

    def search_list(self, word):
        return self.binary_search(word, self.lines, 0, len(self.lines) - 1)


class Anagramizer:

    def __init__(self):
        pass

    def anagrams(self, word, count, anagram_list):
        count -= 1
        if count != 0:
            tmp_list = anagram_list
            anagram_list = []
            for each_word in tmp_list:
                anagram_list.extend(self.get_anagrams(each_word, word[count-1:count]))
        if count != 0:
            anagram_list = self.anagrams(word, count, anagram_list)

        return anagram_list

    def get_anagrams(self, word, letter):
        letters = list(word)
        word_list = []
        word_length = len(letters) + 1
        for i in range(0, word_length):
            letters.insert(i, letter)
            word_list.append(''.join(letters))
            letters.remove(letters[i])
        return word_list

    def get_list(self, list_of_Anagrams):
        tmp_list = []
        word_list = WordList()
        for each_word in list_of_Anagrams:
            if word_list.contains(each_word):
                tmp_list.append(each_word)
        return tmp_list


def main(phrase):


    anagramizer = Anagramizer()

    list_of_Anagrams = set(anagramizer.anagrams(phrase, len(phrase), [phrase[-1:]]))
    # list_of_Anagrams = anagrams(phrase, len(phrase), [phrase[-1:]])
    print("Referencing", len(list_of_Anagrams), "possible combinations of", phrase, "with the valid word list, please wait.")
    tmp_list = anagramizer.get_list(list_of_Anagrams)
    print("Valid word combinations:", len(tmp_list), tmp_list)
    pass


if __name__ == "__main__":
    phrase = input("Enter a word or phrase to Anagramize: ")
    start = time.time()
    main(phrase)
    end = time.time()
    print("Run time:", end - start)
