#include<iostream> 
#include<windows.h>
#include<fstream>
#include<string>
#include<ctime>
#include<vector>
#include <cmath>

using namespace std;
struct CreateBook  // структура для даних при створення книги
{
    string name;
    string author;
    string publisher;
    double price;
    bool new_subject = true;
};
class Book {
private:
    //Book* book; 
    //int size = 0; // кількість створених обєктів

public:
    Book() {
        //this->size = size;
    }
    //Book(string name, string author, string publisher, double price)
    //{
    //    this->name = name;
    //    this->author = author;
    //    this->publisher = publisher;
    //    this->price = price;
    //}
    Book(CreateBook& createBook) {
        //int size = 0; // кількість створених обєктів
        //cout << "Enter the number of objects you need to enter: ";
        //cin >> this->size;
        //this->book = new Book[this->size];
        //for (int i = 0; i < this->size; i++)
        //{
        //    this->book[i].Creat_Book(createBook);
        //}
        //
        //for (int i = 0; i < this->size; i++)
        //{
        //    this->book[i].PrintBook(createBook);
        //}
        createBook.name;
        createBook.author;
        createBook.publisher;
        createBook.price;
        createBook.new_subject;
    }
    void Creat_Object(CreateBook& createBook) { //функція для створення книги
        cout << "Enter name book: ";
        cin.ignore();
        getline (cin, createBook.name);
        //cin>> createBook.name;
        cout << "Enter author book: ";
        getline (cin, createBook.author);
        cout << "Enter publisher book: ";
        getline (cin, createBook.publisher);
        cout << "Enter price book: ";
        cin >> createBook.price;
        cout << "Enter book new or old (new = 1, old = 0) : ";
        cin >> createBook.new_subject;
    }
	void PrintObject(CreateBook& createBook) {
        cout << "Name book: " << createBook.name << endl;
		cout << "Author book: " << createBook.author << endl;
		cout << "Publisher book: " << createBook.publisher << endl;
		cout << "Price book: " << createBook.price << " uah" << endl;
		if (createBook.new_subject == 1)
		{
			cout << "Book " << createBook.name << " is new." << endl;
		}
		else
		{
			cout << "Book " << createBook.name << " is old." << endl;
		}
	}
    ~Book() {
    }
};
//int count;
//double minprice;
//double maxprice;
//double averageprice;
//Book* books;

struct CreateMegazine  // структура для даних при створенні журналу
{
    string name;
    double price;
    bool new_subject = true;
};
class Megazine {
private:
	//Megazine* megazine;
	//int size = 0; // кількість створених обєктів
public:
	Megazine() {}
	Megazine(CreateMegazine& createMegazine) {
        //cout << "Enter the number of objects you need to enter: ";
        //cin >> this->size;
        //this->megazine = new Megazine[this->size];
        //for (int i = 0; i < this->size; i++)
        //{
        //    this->megazine[i].Creat_Megazine(createMegazine);
        //}
        //for (int i = 0; i < this->size; i++)
        //{
        //    megazine[i].PrintMegazin(createMegazine);
        //}
    }
    void Creat_Object(CreateMegazine& createMegazine) {
        cout << "Enter name megazine: ";
        cin.ignore();
        getline(cin, createMegazine.name);
        cout << "Enter price megazine: ";
        cin>> createMegazine.price;
        cout << "Enter megazine new or old (new = 1, old = 0) : ";
        cin >> createMegazine.new_subject;
    }
    void PrintObject(CreateMegazine& createMegazine) {
        cout << "Name megazine: " << createMegazine.name << endl;
        cout << "Price megazine: " << createMegazine.price << " uah" << endl;
        if (createMegazine.new_subject == 1)
        {
            cout << "Megazine " << createMegazine.name << " is new." << endl;
        }
        else
        {
            cout << "Megazine " << createMegazine.name << " is old." << endl;
        }
    }
};

struct CreateAudio {   // структура для даних при створенні аудио-диска
    string name;
    string performer;
    int trek;
    double price;
    bool new_subject = true;
};
class Audio {
private:
   
public:
    Audio() {}
    Audio(CreateAudio& createAudio) {
        //createAudio.name;
        //createAudio.performer;
        //createAudio.trek;
        //createAudio.price;
        //createAudio.new_subject;
    }
    void Creat_Object(CreateAudio& createAudio) {
        cout << "Enter name audio-disc: ";
        cin.ignore();
        getline(cin, createAudio.name);
        cout << "Enter performer audio-disc: ";
        getline(cin, createAudio.performer);
        cout << "Enter the number of tracks on the audio disc: ";
        cin >> createAudio.trek;
        cout << "Enter price audio-disc: ";
        cin >> createAudio.price;
        cout << "Enter audio-disc new or old (new = 1, old = 0) : ";
        cin >> createAudio.new_subject;
    }
    void PrintObject(CreateAudio& createAudio) {
        cout << "Name audio-disc: " << createAudio.name << endl;
        cout << "Performer audio-disc: " << createAudio.performer << endl;
        cout << "Number of tracks on the audio-disc: " << createAudio.trek << endl;
        cout << "Price audio-disc: " << createAudio.price << " uah" << endl;
        if (createAudio.new_subject == 1)
        {
            cout << "Audio-disc " << createAudio.name << " is new." << endl;
        }
        else
        {
            cout << "Audio-disc " << createAudio.name << " is old." << endl;
        }
    }
};

template <typename T, typename T2>
class CShop {
private:
    T* temp; // шаблон масиву класа
    T2* temp2; // шаблон структури
    int count; 
    int size; // кількість створених обєктів
public:

    CShop(){}
    CShop(T temp, T2& temp2) {
        //this->temp2 = temp2;
        //cout << "Enter the number of objects you need to enter: ";
        //cin >> this->size;
        //this->temp = new T[this->size]; // виділяємо память під масив класів
        //this->temp2 = new T2[this->size]; // виділяємо память під масив структур
        //for (int i = 0; i < this->size; i++)
        //{
        //    cout << "\nEnter data " << i + 1 << " object." << endl;
        //    this->temp[i].Creat_Object(this->temp2[i]);
        //}
    }
	void Creat_CShop(T temp, T2& temp2) {
		cout << "Enter the number of objects you need to enter: ";
		cin >> this->size;
		this->temp = new T[this->size]; // виділяємо память під масив класів
		this->temp2 = new T2[this->size]; // виділяємо память під масив структур
		for (int i = 0; i < this->size; i++)
		{
			cout << "\nEnter data " << i + 1 << " object." << endl;
			this->temp[i].Creat_Object(this->temp2[i]);
		}
	}
    void ShowCShop(T temp, T2& temp2) {  // для виводу інформації про об’єкт

        for (int i = 0; i < this->size; i++)
        {
            cout << i + 1 << ".";
            this->temp[i].PrintObject(this->temp2[i]);
        }
    }
    void AveragePrice() { // функція виводу середньої ціни
        double averageprice;
        double temp_price = 0;
        for (int i = 0; i < this->size; i++)
        {
            temp_price += temp2[i].price;
        }
        averageprice = temp_price / this->size;
        cout << "Avarage price " << round(averageprice*100)/100 << " uah" << endl;
    }
    void NewObject() { // функція для виводу нових обєктів
        //cout << "New object." << endl;
        for (int i = 0; i < this->size; i++)
        {
            if (temp2[i].new_subject == 1)
            {
                cout << temp2[i].name << endl;
            }
        }
    }
    void MinPriceObject() { // функція для пошуку мінімального об’єкта
        double minprice;
        minprice = temp2[0].price;
        for (int i = 0; i < this->size; i++)
        {
            if (minprice > temp2[i].price)
            {
                minprice = temp2[i].price;
            }
        }
        cout << "Minimal price object " << minprice << " uah" << endl;
    }
    void MaxPriceObject() { // функція для пошуку максимального об’єкта
        double maxprice;
        maxprice = temp2[0].price;
        for (int i = 0; i < this->size; i++)
        {
            if (maxprice < temp2[i].price)
            {
                maxprice = temp2[i].price;
            }
        }
        cout << "Maximal price object " << maxprice << " uah" << endl;
    }
    void SortMinObject() { // функція для сортування від мінімального до максимального об’єкту
        for (int i = 0; i < this->size; i++)
        {
            for (int j = this->size-1; j > i; j--)
            {
                if (temp2[j].price < temp2[j - 1].price)
                {
                    swap(temp2[j - 1].price, temp2[j].price);
                }
            }
        }
        for (int i = 0; i < this->size; i++)
        {
            cout << temp2[i].price << " uah.\t " /*<< temp2[i].name*/ << endl;
        }
    }
    void SortMaxObject() { // функція для сортування від максимального до мінімального об’єкту
        for (int i = 0; i < this->size; i++)
        {
            for (int j = this->size - 1; j > i; j--)
            {
                if (temp2[j].price > temp2[j - 1].price)
                {
                    swap(temp2[j - 1].price, temp2[j].price);
                }
            }
        }
        for (int i = 0; i < this->size; i++)
        {
            cout << temp2[i].price << " uah.\t " << temp2[i].name << endl;
        }
    }
    ~CShop() {
        delete [] temp; // видаляємо память масиву класів
        delete [] temp2; // видаляємо память масиву структур
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    CreateBook createBook;
    Book book(createBook);

    CreateMegazine createMegazine;
    Megazine megazine(createMegazine);

    CreateAudio createAudio;
    Audio audio(createAudio);

    CShop<Book, CreateBook> cshop(book, createBook);
    CShop<Megazine, CreateMegazine> cshop1(megazine, createMegazine);
    CShop<Audio, CreateAudio> cshop2(audio, createAudio);

    //CShop<Book, CreateBook> cshop(book, createBook);
    //CShop<Megazine, CreateMegazine> cshop1(megazine, createMegazine);
    //CShop<Audio, CreateAudio> cshop2(audio, createAudio);

    //cshop.Creat_CShop(book, createBook);
    //cshop1.Creat_CShop(megazine, createMegazine);
    //cshop2.Creat_CShop(audio, createAudio);
    //cshop.ShowCShop(book, createBook);
    //cshop1.ShowCShop(megazine, createMegazine);
    //cshop2.ShowCShop(audio, createAudio);

    //cshop1.AveragePrice();
    //cshop1.NewObject();
    //cshop1.MinPriceObject();
    //cshop1.MaxPriceObject();
    //cshop1.SortMinObject();
    //cshop1.SortMaxObject();

    //book.PrintBook(createBook);
    //CreateMegazine createMegazine;
    //Megazine megazine(createMegazine);
    
    bool enter = true;
    while (enter)
    {
        cout << "----------MENU----------" << endl;
        cout << "1.You want to create new objects." << endl;
        cout << "2.Show information about all objects." << endl;
        cout << "3.Show information about new objects." << endl;
        cout << "4.Show information minimal price objects." << endl;
        cout << "5.Show information maximal price objects." << endl;
        cout << "6.Show information about sorting objects (from minimum to maximum)." << endl;
        cout << "7.Show information about sorting objects (from maximum to minimum)." << endl;
        cout << "0.Exit." << endl;
        int action;
        cout << "Select a menu item: ";
        cin >> action;
        switch (action)
        {
            case 1:
            {
                int action1 = 1;
                while (action1)
                {
                    cout << "Which object do you want to add?" << endl;
                    cout << "1.Book." << endl;
                    cout << "2.Megazine." << endl;
                    cout << "3.Audio-disk." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action1;
                    switch (action1)
                    {
                        case 1:
                        {
                            cshop.Creat_CShop(book, createBook);
                            break;
                        }
                        case 2:
                        {
                            cshop1.Creat_CShop(megazine, createMegazine);
                            break;
                        }
                        case 3:
                        {
                            cshop2.Creat_CShop(audio, createAudio);
                            break;
                        }
                        case 0:
                        {
                            break;
                        }
                        default:
                        cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 2:
            {
                int action2 = 1;
                while (action2)
                {
                    cout << "1.Information about all objects." << endl;
                    cout << "2.Information about books." << endl;
                    cout << "3.Information about magazines." << endl;
                    cout << "4.Information about audio-disks." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action2;
                    switch (action2)
                    {
                        case 1:
                        {
                            cout << "\n\tALL OBJECT." << endl;
                            cout << "\nBooks." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop.ShowCShop(book, createBook);
                            cout << "--------------------------------------------------" << endl;
                            cout << "\nMegazine." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop1.ShowCShop(megazine, createMegazine);
                            cout << "--------------------------------------------------" << endl;
                            cout << "\nAudio-discs." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop2.ShowCShop(audio, createAudio);
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 2:
                        {
                            cout << "\nBooks." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop.ShowCShop(book, createBook);
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "\nMegazine." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop1.ShowCShop(megazine, createMegazine);
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "\nAudio-discs." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop2.ShowCShop(audio, createAudio);
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 0:
                        {
                            break;
                        }
                        default:
                            cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 3:
            {
                int action3 = 1;
                while (action3)
                {
                    cout << "1.New all objects." << endl;
                    cout << "2.New books." << endl;
                    cout << "3.New magazines." << endl;
                    cout << "4.New audio-disks." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action3;
                    switch (action3)
                    {
                        case 1:
                        {
                            cout << "\n\tNEW ALL OBJECT." << endl;
                            cout << "\nNew books." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop.NewObject();
                            cout << "--------------------------------------------------" << endl;
                            cout << "\nNew magazines." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop1.NewObject();
                            cout << "--------------------------------------------------" << endl;
                            cout << "\nNew audio-disks." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop2.NewObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 2:
                        {
                            cout << "\nNew books." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop.NewObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "\nNew magazines." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop1.NewObject();
                            cout << "--------------------------------------------------" << endl;
                            
                        }
                        case 4:
                        {
                            cout << "\nNew audio-disks." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop2.NewObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 0:
                        {
                            break;
                        }
                        default:
                            cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 4:
            {
                int action4 = 1;
                while (action4)
                {
                    cout << "1.Minimal price all object." << endl;
                    cout << "2.Minimal price book." << endl;
                    cout << "3.Minimal price magazine." << endl;
                    cout << "4.Minimal price audio-disk." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action4;
                    switch (action4)
                    {
                        case 1:
                        {
                            cout << "\n\tMINIMAL PRICE ALL OBJECT." << endl;
                            cout << "\nMinimal price book." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop.MinPriceObject();
                            cout << "--------------------------------------------------" << endl;
                            cout << "\nMinimal price megazine." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop1.MinPriceObject();
                            cout << "--------------------------------------------------" << endl;
                            cout << "\nMinimal price Audio-disc." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop2.MinPriceObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 2:
                        {
                            cout << "\nMinimal price book." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop.MinPriceObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "\nMinimal price megazine." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop1.MinPriceObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "\nMinimal price Audio-disc." << endl;
                            cout << "--------------------------------------------------" << endl;
                            cshop2.MinPriceObject();
                            cout << "--------------------------------------------------" << endl;
                            break;
                        }
                        case 0:
                        {
                            break;
                        }
                        default:
                        cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 5:
            {
                int action5 = 1;
                while (action5)
                {
                    cout << "1.Maximal price all object." << endl;
                    cout << "2.Maximal price book." << endl;
                    cout << "3.Maximal price magazine." << endl;
                    cout << "4.Maximal price audio-disk." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action5;
                    switch (action5)
                    {
                    case 1:
                    {
                        cout << "\n\tMAXIMAL PRICE ALL OBJECT." << endl;
                        cout << "\nMaximal price book." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop.MaxPriceObject();
                        cout << "--------------------------------------------------" << endl;
                        cout << "\nMaximal price megazine." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop1.MaxPriceObject();
                        cout << "--------------------------------------------------" << endl;
                        cout << "\nMaximal price Audio-disc." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop2.MaxPriceObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 2:
                    {
                        cout << "\nMaximal price book." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop.MaxPriceObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 3:
                    {
                        cout << "\nMaximal price megazine." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop1.MaxPriceObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 4:
                    {
                        cout << "\nMaximal price Audio-disc." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop2.MaxPriceObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 0:
                    {
                        break;
                    }
                    default:
                        cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 6:
            {
                int action6 = 1;
                while (action6)
                {
                    cout << "Which object do you want to sort? (from minimum to maximum)" << endl;
                    cout << "1.Book." << endl;
                    cout << "2.Megazine." << endl;
                    cout << "3.Audio-disk." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action6;
                    switch (action6)
                    {
                    case 1:
                    {
                        cout << "\nSorting books from minimum to maximum." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop.SortMinObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 2:
                    {
                        cout << "\nSorting megazines from minimum to maximum." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop1.SortMinObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 3:
                    {
                        cout << "\nSorting audio-discs from minimum to maximum." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop2.SortMinObject();
                        break;
                    }
                    case 0:
                    {
                        break;
                    }
                    default:
                        cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 7:
            {
                int action7 = 1;
                while (action7)
                {
                    cout << "Which object do you want to sort? (from maximum to minimum)" << endl;
                    cout << "1.Book." << endl;
                    cout << "2.Megazine." << endl;
                    cout << "3.Audio-disk." << endl;
                    cout << "0.Exit." << endl;
                    cout << "Select: ";
                    cin >> action7;
                    switch (action7)
                    {
                    case 1:
                    {
                        cout << "\nSorting books from maximum to minimum." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop.SortMaxObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 2:
                    {
                        cout << "\nSorting megazines from maximum to minimum." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop1.SortMaxObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 3:
                    {
                        cout << "\nSorting audio-discs from maximum to minimum." << endl;
                        cout << "--------------------------------------------------" << endl;
                        cshop2.SortMaxObject();
                        cout << "--------------------------------------------------" << endl;
                        break;
                    }
                    case 0:
                    {
                        break;
                    }
                    default:
                        cout << "Incorrect menu item. Choice again." << endl;
                    }
                }
                break;
            }
            case 0:
            {
                enter = false;
                cout << "Thank you for the job. Goodbye." << endl;
                break;
            }
            default:
                cout << "You have selected the incorrect menu item. Please make your choice again." << endl;
            break;
        }

    }
    return 0;
}