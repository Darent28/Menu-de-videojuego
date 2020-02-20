#include <string>

class VideoGame {
    public:
      std::string name;
      std::string esrb;
      std::string status;
      float price;
      int quantity;

      // Member Functions
      void setESRB(int select);
      void setStatus(int select);
};

void VideoGame::setESRB(int select) {
    char classification[6][5] = { "E", "E10+", "T", "M17+", "A", "RP" };
    esrb = classification[select];
}

void VideoGame::setStatus(int select) {
    char statuses[2][6] = { "Venta", "Renta" };
    status = statuses[select];
}
