class Animal
{
private:
    int hunger;
    int happiness;
    int health;
    int energy;
    int age;
    std::string petName;
public:
    
    Animal();
    
    Animal(int hungry, int happy, int healthy, int energyLevel, int petAge, std::string name);
    
    void setHunger(int hungry);
    
    int getHunger();
    
    void setHappiness(int happy);
    
    int getHappiness();
    
    void setHealth(int healthy);
    
    int getHealth();
    
    void setEnergy(int energyLevel);
    
    int getEnergy();
    
    void setAge(int petAge);
    
    int getAge();
    
    void setName(std::string name);
    
    std::string getName();
    
    void Play();
    
    void Feed();
    
    void GiveMedicine();
    
    void Sleep();

};