
class Stack {
    private:
        char *stack = 0;
        int n = 0;

    public:
        void push(char c);
        char pop();
        Stack(int x);
        int size();
        void clear();
};

bool brackets(Stack *stack, std::string s);