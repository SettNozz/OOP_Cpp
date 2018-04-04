#include <iostream>
#include <fstream>

using namespace std;

//структура, состоящая из 2х структур: 1 - фирма, 2 - физическое лицо
struct spravochnik{
    struct spravochnik_firma{
        string firm_name;
        string spetialization;
        string street;
        long long number_of_huse;
        long long phone;
    } firma;
    struct spravochnik_fiz_fase{
        string surname;
        string name;
        string street;
        long long house;
        long long phone;
    } fiz_fase;
};

void write_to_file(spravochnik *arr,int len){ //принимаем указатель на массив структур, длинну этого массива
    cout << "Запись справочника в файл" << endl;
    ofstream fout; //переменная типа офстрим для записи в файл
    fout.open("result.txt"); // открываем файл для записи
    for (int i = 0; i < len; ++i) {
        //ниже идет проверка, не пустые ли поля у структур. || логическое или
        if(arr[i].firma.firm_name != "" || arr[i].firma.spetialization != "" || arr[i].firma.street != "" ||
                arr[i].firma.number_of_huse != 0 || arr[i].firma.phone != 0){
            //при выполнении условия, идет запись в файл всех полей объектов из массива структур.
            fout << arr[i].firma.firm_name << endl  << arr[i].firma.spetialization << endl << arr[i].firma.street
                 << endl << arr[i].firma.number_of_huse << endl << arr[i].firma.phone << endl;
        }

    }
    for (int j = 0; j < len; ++j) {
        if(arr[j].fiz_fase.surname != "" || arr[j].fiz_fase.name != "" || arr[j].fiz_fase.street != "" ||
                arr[j].fiz_fase.house != 0 || arr[j].fiz_fase.phone != 0){
            fout << arr[j].fiz_fase.surname << endl << arr[j].fiz_fase.name << endl << arr[j].fiz_fase.street
                 << endl << arr[j].fiz_fase.house << endl << arr[j].fiz_fase.phone << endl;
        }
    }
    fout.close(); //закрываем файл, для того, чтоб могли продолжить работу с ним дальше в программе
}

void add_object(spravochnik *arr){
    cout << "Добавление элементов в справочник" << endl;
    cout << "Добавление фирмы:" << endl;
    cout << "Название фирмы: ";
    cin >> arr[5].firma.firm_name;
    cout << "Специализация: ";
    cin >> arr[5].firma.spetialization;
    cout << "Улица: ";
    cin >> arr[5].firma.street;
    cout << "Дом: ";
    cin >> arr[5].firma.number_of_huse;
    cout << "Телефон: ";
    cin >> arr[5].firma.phone;
    system("CLS");
    cout << "Добавление физического лица:" << endl;
    cout << "Фамилия: ";
    cin >> arr[5].fiz_fase.surname;
    cout << "Имя: ";
    cin >> arr[5].fiz_fase.name;
    cout << "Улица: ";
    cin >> arr[5].fiz_fase.street;
    cout << "Дом: ";
    cin >> arr[5].fiz_fase.house;
    cout << "Телефон: ";
    cin >> arr[5].fiz_fase.phone;
}

void read_file(){
    cout << "Чтение из файла." << endl;
    ifstream fin("result.txt"); //открываем файл для чтения
    char buff[50]; // буфер промежуточного хранения считываемого из файла текста
    while(fin){
        fin >> buff; // считали первое слово из файла
        cout << buff << endl; // напечатали это слово
    }
    fin.close(); // закрываем файл
}

void print_firm(spravochnik *arr, int num){ //принимаем массив структур, номер структуры в массиве(индекс)
    cout << "Вывод результатов поиска" << endl;
    cout << arr[num].firma.firm_name << endl  << arr[num].firma.spetialization << endl << arr[num].firma.street
         << endl << arr[num].firma.number_of_huse << endl << arr[num].firma.phone << endl;
    cout << "Запись результата поиска в файл" << endl;
    ofstream fout;
    fout.open("result_query.txt"); //открываем файл для записи
    fout << arr[num].firma.firm_name << endl  << arr[num].firma.spetialization << endl << arr[num].firma.street
         << endl << arr[num].firma.number_of_huse << endl << arr[num].firma.phone << endl;
    fout.close(); //закрываем файл
}

void print_fiz(spravochnik *arr, int num){
    cout << "Вывод результатов поиска" << endl;
    cout << arr[num].fiz_fase.surname << endl << arr[num].fiz_fase.name << endl << arr[num].fiz_fase.street
         << endl << arr[num].fiz_fase.house << endl << arr[num].fiz_fase.phone << endl;
    cout << "Запись результата поиска в файл" << endl;
    ofstream fout;
    fout.open("result_query.txt"); //открываем файл для записи
    fout << arr[num].fiz_fase.surname << endl << arr[num].fiz_fase.name << endl << arr[num].fiz_fase.street
         << endl << arr[num].fiz_fase.house << endl << arr[num].fiz_fase.phone << endl;
    fout.close(); //закрываем файл
}

int loop_firm(spravochnik *arr, int len, string n){
    for(int i = 0; i < len; ++i){
        if(arr[i].firma.firm_name == n)
            return i;
        if(arr[i].firma.spetialization == n)
            return i;
        if(arr[i].firma.street == n)
            return i;
        if(arr[i].firma.number_of_huse == atoi(n.c_str())) // atoi - string to int
            return i;
        if(arr[i].firma.phone == atoi(n.c_str()))
            return i;
    }
}

int loop_fiz(spravochnik *arr, int len, string k){
    for(int i = 0; i < len; ++i){
        if(arr[i].fiz_fase.surname == k)
            return i;
        if(arr[i].fiz_fase.name == k)
            return i;
        if(arr[i].fiz_fase.street == k)
            return i;
        if(arr[i].fiz_fase.house == atoi(k.c_str()))
            return i;
        if(arr[i].fiz_fase.phone == atoi(k.c_str()))
            return i;
    }
}

void find_func(spravochnik *arr, int len){ //принимаем массив структур, и его длинну
    int firm_of_fiz;
    string spam, egg, stree, noh, phn;
    string spam1, egg1, stree1, noh1, phn1;
    cout << "Поиск в справочнике по полю структуры " << endl;
    cout << "Введите, что вы хотите найти (1 - фирма, 2 - физическое лицо): ";
    cin >> firm_of_fiz;
    if (firm_of_fiz == 1){
        char key;
        cout << "Введите, по какому полю вы собираетесь искать(1 - название фирмы, 2 - специализация, 3 - улица, 4 - "
                "дом, 5 - телефон): ";
        cin >> key;
        switch(key){
            case '1': cout << "Введите название фирмы: ";
                cin >> spam;
                print_firm(arr, loop_firm(arr , len, spam));
                break;
            case '2': cout << "Введите специализацию: ";
                cin >> egg;
                print_firm(arr, loop_firm(arr , len, egg));
                break;
            case '3': cout << "Введите название улицы: ";
                cin >> stree;
                print_firm(arr, loop_firm(arr , len, stree));
                break;
            case '4': cout << "Введите номер дома: ";
                cin >> noh;
                print_firm(arr, loop_firm(arr , len, noh));
                break;
            case '5': cout << "Введите номер телефона: ";
                cin >> phn;
                print_firm(arr, loop_firm(arr , len, phn));
                break;
            default:
                cout << "Введены некорректные данные." << endl;
                break;
        }
    }
    if(firm_of_fiz == 2){
        char key;
        cout << "Введите, по какому полю вы собираетесь искать(1 - Фамилия, 2 - имя, 3 - улица, 4 - "
                "дом, 5 - телефон): ";
        cin >> key;
        switch (key){
            case '1': cout << "Введите фамилию: ";
                cin >> spam1;
                print_fiz(arr, loop_fiz(arr, len, spam1));
                break;
            case '2': cout << "Введите имя: ";
                cin >> egg1;
                print_fiz(arr, loop_fiz(arr, len, egg1));
                break;
            case '3': cout << "Введите название улицы: ";
                cin >> stree1;
                print_fiz(arr, loop_fiz(arr, len, stree1));
                break;
            case '4': cout << "Введите номер дома: ";
                cin >> noh1;
                print_fiz(arr, loop_fiz(arr, len, noh1));
                break;
            case '5': cout << "Введите номер телефона: ";
                cin >> phn1;
                print_fiz(arr, loop_fiz(arr, len, phn1));
                break;
            default:
                cout << "Введены некорректные данные." << endl;
                break;
        }
    }
}


void menu(spravochnik *arr, int len) {
    char s[5];
    int i;
    do {
        system("CLS");
        cout << "--------------------MENU--------------------" << endl;
        cout << "<1>. Добавить объекты в справочник" << endl;
        cout << "<2>. Записать справочник в файл" << endl;
        cout << "<3>. Чтение справочника из файла" << endl;
        cout << "<4>. Поиск объекта по полю структуры" << endl;
        cout << "<5>. Выход из программы" << endl;
        std::cin.getline(s, 10);
        i = atoi(s);
        switch (i) {
            case 1: {
                system("CLS");
                add_object(arr);
                cout << "Press enter to continue ...";
                cin.get();
                break;
            }
            case 2: {
                system("CLS");
                write_to_file(arr, len);
                cout << "Press enter to continue ...";
                cin.get();
                break;
            }
            case 3: {
                system("CLS");
                read_file();
                cout << "Press enter to continue ...";
                cin.get();
                break;
            }
            case 4: {
                system("CLS");
                find_func(arr, len);
                cout << "Press enter to continue ...";
                cin.get();
                break;
            }
            case 5: {
                system("CLS");
                std::cout << "Press enter to continue ...";
                std::cin.get();
                break;
            }
        }
    }
    while (i != 5);
}

int main() {
    setlocale(LC_ALL, "Russian");

    spravochnik spravochnik1 = {"Педигри", "еда", "Металлургов", 53, 380674443322,
                                "Иван", "Демкин", "Правды", 73, 380666666666};
    spravochnik spravochnik2 = {"Дакайн", "портфели", "Новокузнецкая", 23, 380999998997,
                                "Валентина", "Войденко", "Мира", 2, 380358305761};
    spravochnik spravochnik3 = {"Нестле", "еда", "Святого Николая", 53, 380967878789,
                                "Богдан", "Майлов", "Маяковского", 91, 380916935934};
    spravochnik spravochnik4 = {"Мальберо", "табачные изделия", "Новгородская", 83, 380505558743,
                                "Владислав", "Симинько", "Гагарина", 73, 380466392225};
    spravochnik spravochnik5 = {"Нивея", "косметика", "Советская", 153, 380638495830,
                                "Максим", "Черашев", "Портовая", 42, 305896049403};
    spravochnik spravochnik6 = {};
    const int size = 6; // размер массива
    //ниже создаем массив структур который хранит в себе size элементов
    spravochnik spravochnik[size] ={spravochnik1, spravochnik2, spravochnik3, spravochnik4, spravochnik5, spravochnik6};
    //вызываем функцию меню, в которую передаем массив структур и длинну массива
    menu(spravochnik, size);
    return 0;
}