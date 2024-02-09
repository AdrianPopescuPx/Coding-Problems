package Sortings;
import java.util.TreeSet;

class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        TreeSet<Integer> treeSet = new TreeSet<>();
        for (int i = 0; i < points.length; i++) {
            treeSet.add(points[i][0]);
        }
        int answer = 0, last = treeSet.first();
        for (Integer x : treeSet) {
            if (Math.abs(x - last) > answer) {
                answer = Math.abs(x - last);
            }
            last = x;
        }
        return answer;
    }
    public static void main(String[] args) {
        
    }
}