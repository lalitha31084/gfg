class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for (string s : arr) {
            if (s != "+" && s != "-" && s != "*" && s != "/" && s != "^") {
                st.push(stoi(s));
            } 
            else {
                int a = st.top(); 
                st.pop();
                int b = st.top(); 
                st.pop();
                if (s == "+")
                    st.push(b + a);
                else if (s == "-")
                    st.push(b - a);
                else if (s == "*")
                    st.push(b * a);
                else if (s == "/") {
                   
                    int result = b / a;
                    if ((b % a != 0) && ((b < 0) != (a < 0))) {
                        result -= 1;
                    }
                    st.push(result);
                }
                else if (s == "^")
                    st.push(pow(b, a)); 
            }
        }

        return st.top();
    }
};
