class Node{
    String val;
    Node prev, next;

    public Node(String val) {
        this.prev = this.next = null;
        this.val = val;
    }
}

class BrowserHistory {
    Node homePage, currentPage;
    public BrowserHistory(String homepage) {
        this.homePage = this.currentPage = new Node(homepage);
    }

    public void visit(String url) {
        Node holdCurrentPage = currentPage;
        currentPage.next = new Node(url);
        currentPage = currentPage.next;
        currentPage.prev = holdCurrentPage;
    }

    public String back(int steps){
        while(steps > 0 && this.currentPage.prev != null){
            steps--;
            this.currentPage = currentPage.prev;
        }
        return currentPage.val;
    }

    public String forward(int steps) {
        while(steps > 0 && this.currentPage.next != null){
            steps--;
            this.currentPage = currentPage.next;
        }
        return currentPage.val;
    }
}


/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory obj = new BrowserHistory(homepage);
 * obj.visit(url);
 * String param_2 = obj.back(steps);
 * String param_3 = obj.forward(steps);
 */