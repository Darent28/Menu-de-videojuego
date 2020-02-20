#include <iostream>
#include <string>

class VideoGame {
    public:
      std::string name = "";
      std::string esrb = "";
      int quantity;
      float sell_price;
      float rent_price;

      // Member Functions
      void setESRB(int select);
};

void VideoGame::setESRB(int select) {
    char classification[6][5] = { "E", "E10+", "T", "M17+", "A", "RP" };
    esrb = classification[select];
}

class VideoGameUse: public VideoGame {
    public:
      std::string status = "";
      float price;

      // Member Functions
      void setStatus(int select);

    protected:
      void setPrice();
};

void VideoGameUse::setStatus(int select) {
    char statuses[2][6] = { "Venta", "Renta" };
    status = statuses[select];
    setPrice();
}

void VideoGameUse::setPrice() {
    sell_price = VideoGame::sell_price;
    rent_price = VideoGame::rent_price;
    if(status != "" && ((sell_price || rent_price) != NULL)) {
        if(status == "Venta") {
            price = sell_price;
        } else {
            price = rent_price;
        }
    } else {
        std::cout << "Err404: Debes establecer un status primero y/o agregar precios de venta/renta :/ \n";
    }
}
