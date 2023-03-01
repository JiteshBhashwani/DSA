import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

 class Main{
    public static List<List<Integer>> subsetsWithDup(int[] nums) {
        return subsets(nums);
    }
    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> answer = new ArrayList<>();
        helper(answer,nums,0, new ArrayList<Integer>());
        return answer;
    }

    private static void helper(List<List<Integer>> answer, int[] input,int pointTop, ArrayList<Integer> output) {
        if(input.length == pointTop){
            ArrayList<Integer> leaf = new ArrayList<>(output);
            Collections.sort(leaf);
            if(!answer.contains(leaf))answer.add(leaf);
            return;
        }
        int hold = input[pointTop];
        pointTop++;
        helper(answer,input,pointTop,output);
        output.add(hold);
        helper(answer, input, pointTop, output);
        pointTop--;
        output.remove(output.size()-1);
    }

    public static void main(String[] args) {
        int[] arr = {4,4,4,1,4};
        System.out.println(subsetsWithDup(arr));
    }
}