struct Component {
  string name;
  float weigth, grade;
};

class Subject {
private:
  string name;
  map<string, vector<Component>> categories;
public:
  // Constructor
  Subject(string name);

  // Destructor
  ~Subject();

  // Methods
  void add_category(string name);

  void add_component(string category, string component, float weigth);
  void add_component(string category, string component, float weigth, float grade);


  void print();
};
