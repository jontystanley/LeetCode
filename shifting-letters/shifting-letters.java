class Solution {
    public String shiftingLetters(String S, int[] shifts) {
        StringBuilder ans = new StringBuilder(S);
        long shift=0;
        for (int i = S.length()-1; i >=0 ; i--){
            ans.setCharAt(i, (char)((S.charAt(i) - 'a' + (shift+shifts[i]) % 26) % 26 + 'a'));
            shift+=shifts[i];
        }
        return ans.toString();
    }
}