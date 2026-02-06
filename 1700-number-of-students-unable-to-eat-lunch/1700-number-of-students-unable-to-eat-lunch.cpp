class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;

        for(int x : students ){
            q.push(x);
        }

        int idx = 0 ;
        int rotating = 0 ;

        while(!q.empty() && rotating < q.size()){

            if(sandwiches[idx] == q.front()){
                idx++;
                q.pop();
                rotating = 0;
            }else {
                int temp = q.front();
                q.pop();
                q.push(temp);
                rotating++;

            }
        }

        return q.size();
    }
};