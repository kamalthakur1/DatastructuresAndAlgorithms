public class Solution extends VersionControl {

    public int firstBadVersion(int n) {
        return firstVersion(1, n);
    }
    
    public int firstVersion(int start, int end) {
        if(start >= end) {
            return start;
        } 
        int mid = start + ((end - start)/2);
        if(isBadVersion(mid)) {
            return firstVersion(start, mid);
        }
        return firstVersion(mid + 1, end);
    }
    
}