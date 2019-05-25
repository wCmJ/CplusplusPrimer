class Person {
public:
	int dataPerson;
};

class Worker : virtual public Person {
public:
	int dataWorker;
};
Worker w;
//memory:
    address1 --->   00 00 00 00 08 00 00 00    
    dataWorker
    dataPerson

class Worker
{
public:
	int dataWorker;
};

class Farmer {
public:
	int dataFarmer;
};

class MigrantWorker :virtual public Worker, public Farmer {
public:
	int dataMigrantWorker;
};
MigrantWorker m;
//memory:
    dataFarmer
    address1    --->    fc ff ff ff 08 00 00 00
    dataMigrantWorker
    dataWorker
    
class Person {
public:
	int dataPerson;
};
class Worker :virtual public Person {
public:
	int dataWorker;
};

class MigrantWorker :virtual public Worker {
public:
	int dataMigrantWorker;
};
MigrantWorker m;
//memory:
    address MigVir
    dataMigrantWorker
    dataPerson
    address WorVir
    dataWorker
    
    
    
    
    
    
    
    
    
    


