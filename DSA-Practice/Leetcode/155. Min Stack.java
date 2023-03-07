// public class 155. Min Stack {
    
// }
class MinStack {
    int[] data;
    int[] min;
    int dataHead = -1;
    int minHead = -1;

    public MinStack() {
        data = new int[10000];
        min = new int[10000];
    }

    public void push(int val) {
        if(minHead == -1) min[++minHead] = val;
        else{
            if(min[minHead] >= val) min[++minHead] = val;
        }
        data[++dataHead] = val;
    }

    public void pop() {
        if(min[minHead] == data[dataHead]){
            minHead--;
        }
        data[dataHead--] = 0;
    }

    public int top() {
        return data[dataHead];
    }

    public int getMin() {
        return min[minHead];
    }
}
