
#include <iostream>

class NoAmmoException: public std::exception{
    public:
    virtual const char* what() const throw()
    {
        return "Insufficient ammunition";
    }
};

class MagazineFullException: public std::exception{
    public:
    virtual const char* what() const throw()
    {
        return "Magazine is full";
    }
};

class WeaponJammedException: public std::exception{
    private:
        int rounds;
    public:
        WeaponJammedException() : rounds(0) {}

        WeaponJammedException(int rounds) : rounds(rounds) {}

    virtual const char* what() const throw()
    {
        std::string message = "Weapon is jammed with " + std::to_string(rounds) + " rounds left";
        return message.c_str();
    }
};

class Weapon
{
    private:
        int rounds;
        bool jammed;
        NoAmmoException ENoAmmo;
        MagazineFullException EMagzineFull;
        WeaponJammedException EWeaponJammed;
        
    public:
        Weapon(){
            rounds = 0;
            jammed = true;
        }
        
        void Fire(){
            if(jammed)
                throw WeaponJammedException(rounds);
            if(rounds<1)
                throw ENoAmmo;
            std::cout << "Weapon Fired" << std::endl;
            rounds--;
        }
        
        void Reload(){
            if(rounds == 10)
                throw EMagzineFull;
            rounds += 10;
            if(rounds > 10)
                rounds = 10;
            std::cout << "Weapon Reloaded" << std::endl;
        }
        
};

int main()
{
    try{    
        Weapon weapon;
        weapon.Fire();
        weapon.Reload();
        weapon.Reload();
    } catch (const NoAmmoException& e){
        std::cout << "error: " << e.what() << std::endl;
    } catch (const MagazineFullException& e){
        std::cout << "error: " << e.what() << std::endl;
    } catch (const WeaponJammedException& e){
        std::cout << "error: " << e.what() << std::endl;
    } catch (...){
        std::cout << "error: unknown exception" << std::endl;
    }
    return 0;
}