class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        char = ['a','b','c','d','e','f','g','h','i','j']
        for c in char:
            if c in firstWord:
                firstWord = firstWord.replace(c,str(char.index(c)))
        for c in char:
            if c in secondWord:
                secondWord = secondWord.replace(c,str(char.index(c)))
        for c in char:
            if c in targetWord:
                targetWord = targetWord.replace(c,str(char.index(c)))
        if int(firstWord)+int(secondWord) == int(targetWord):
            return True
        return False
