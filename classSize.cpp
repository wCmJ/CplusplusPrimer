class X{
    int x = 1;
 public:
    virtual void display(){}
}
//sizeof(X) 8
    vptrX
    x
    
class Y :virtual public X {
public:
	virtual void ydis(){ cout << "ydis" << endl; }
private:
	int y = 2;
};
//sizeof(Y) 20
    vptrY
    vDerivedY
    y
    vptrX
    x
    
class Z :virtual public X {
public:
	virtual void zdis(){ cout << "zdis" << endl; }
private:
	int z = 3;
};
//sizeof(Z) 20
    vptrZ
    vDerivedZ
    z
    vptrX
    x

class A :public Y, public Z {
public:
	virtual void adis() { cout << "adis" << endl; }
private:
	int a = 4;
};
//sizeof(A) 36
    vptrY
    vDerivedY
    y
    vptrZ
    vDerivedZ
    z
    a
    vptrX
    x


class X {
public:
	//virtual void display(){ cout << "display" << endl; }
private:
	int x = 1;
};
//sizeof(X) 4
    x
    
class Y :virtual public X {
public:
	virtual void ydis(){ cout << "ydis" << endl; }
private:
	int y = 2;
};
//sizeof(Y) 16
    vptrY
    vDerivedY
    y
    x
    
class Z :virtual public X {
public:
	virtual void zdis(){ cout << "zdis" << endl; }
private:
	int z = 3;
};
//sizeof(Z) 16
    vptrZ
    vDerivedZ
    z
    x
    
class A :public Y, public Z {
public:
	virtual void adis() { cout << "adis" << endl; }
private:
	int a = 4;
};
//sizeof(A) 32
    vptrY   --------------------------------->  ydis
    vDerivedY                            ---->  adis
    y
    vptrZ   --------------------------------->  zdis
    vDerivedZ
    z
    a
    x

class X{
    int a = 1;
}


class Y:virtual public X{
    int b = 2;
}

class Z: virtual public Y{
    int c = 3;
}
//sizeof(Z) 20
    vDerivedZ
    c
    a
    vDerivedY
    b







