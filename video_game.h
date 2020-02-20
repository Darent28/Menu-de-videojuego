#include <iostream>
#include <string>

class VideoGame {
    public:
      std::string name = "";
      std::string esrb = "";
      std::string status = "";
      int quantity;
      float sell_price;
      float rent_price;
      float price;

      // Member Functions
      void setESRB(int select);
      void setStatus(int select);
      void setPrice(float set_price);
};

void VideoGame::setESRB(int select) {
    char classification[6][5] = { "E", "E10+", "T", "M17+", "A", "RP" };
    esrb = classification[select];
}

void VideoGame::setStatus(int select) {
    char statuses[2][6] = { "Venta", "Renta" };
    status = statuses[select];
}

void VideoGame::setPrice(float set_price) {
    if(status != "") {
        if(status == "Venta") {
            price = sell_price;
        } else {
            price = rent_price;
        }
    } else {
        std::cout << "Debes establecer un status primero :/ \n";
    }
}
