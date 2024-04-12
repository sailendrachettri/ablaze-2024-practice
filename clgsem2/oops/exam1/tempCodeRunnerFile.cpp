
        void display();
        friend void operator+(Counter);
};

void Counter::display(){
    cout << "Value of count: "  << count << endl;
}

Counter::Counter(){
    count = 0;
}
