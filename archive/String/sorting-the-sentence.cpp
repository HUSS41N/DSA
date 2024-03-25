class Solution:
    def sortSentence(self, s: str) -> str:
        arr = s.split(" ")
        for i in range(len(arr)-1):
            for j in range(len(arr)-i-1):
                if int(arr[j][-1]) > int(arr[j+1][-1]):
                    temp = arr[j]
                    arr[j] = arr[j+1]
                    arr[j+1] = temp
        listToStr = ' '.join([str(elem[0:-1]) for elem in arr])

        return listToStr 
