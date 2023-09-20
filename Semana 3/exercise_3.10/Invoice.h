#include <string>

class Invoice {
    public:
        Invoice(std::string partNumber, std::string partDescription, int itemQuantity, int itemPrice, double VAT, double discountRate)
            : number {partNumber}, description {partDescription}, tax {VAT} {
            if(itemQuantity > 0) {
                quantity = itemQuantity;
            }
            if(itemPrice > 0) {
                price = itemPrice;
            }
            discount = std::abs(discountRate);
        }
        void setNumber(std::string partNumber) {
            number = partNumber;
        }
        void setDescription(std::string partDescription) {
            description = partDescription;
        }
        void setQuantity(int itemQuantity) {
            quantity = itemQuantity;
        }
        void setPrice(int itemPrice) {
            price = itemPrice;
        }
        void setTax(double VAT) {
            tax = VAT;
        }
        void setDiscount(double discountRate) {
            if(discountRate > quantity * price){
                discount = 0;
            }
            else
                discount = (quantity * price) * discountRate / 100;
        }


        std::string getNumber() const {
            return number;
        }
        std::string getDescription() const {
            return description;
        }
        int getQuantity() const {
            return quantity;
        }
        int getPrice() const {
            return price;
        }
        double getTax() const {
            return tax;
        }
        double getDiscount() const {
            return discount;
        }
        

        double getInvoiceAmount() {
            return (quantity * price + tax - discount);
        }

    private:
        std::string number;
        std::string description;
        int quantity;
        int price;
        double tax{0.20};
        double discount{0};
};