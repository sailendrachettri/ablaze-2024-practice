

    public:
        String();
        String(const char *s);
        String(const String &s);
        ~String();

        friend String operator+(const String &s, String &t);
        friend int operator<=(const String &s, String &t);
        friend void show(const String s);
};

// friend function of String class
void show(const String s){
    cout << s.p <<endl;
}

int operator<=(const String &s, String &t){
    int m = strlen(s.p);
    int n = strlen(t.p);

    if(m== n) return 1;

    return 0;
}

String operator+(const String &s, String &t){
    String temp;
    temp.len = s.len + t.len;
    temp.p = new char [temp.len + 1];
    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);

    return temp;
    
}

// constructor of String class
String::String(){
    len = 0;
    p = 0;
}

String::String(const char *s){
    len = strlen(s);
    p = new char [len+1];
    strcpy(p, s);
}
String::String(const String &s){
    len = s.len;
    p = new char[len + 1];
    strcpy(p, s.p);
}

String::~String(){
    delete p;
}


int main()
{
    cout << endl << endl;

    String s1 = "New";
    String s2 = "York";
    String s3 = "Delhi";
    String str1, str2, str3;
    str1 = s1;
    str2 = s2;
    str3 = s1 + s2;

    cout << "Show: str1: ";
    show(str1);

    cout << "Show str2: ";
    show(str2);

    if(str1 <= str2){
        show(str1);
        cout << "Smaller than";
        show(str3);
        
    } else{
        show(str3);
        cout << "Smaller than: ";
        show(str1);
    }
