#include <cstdio>
#include <cstring>

int main() {

    std::printf("Enter Name: ");
    char name_buffer[100];
    std::fgets(name_buffer, sizeof(name_buffer), stdin);
    name_buffer[std::strcspn(name_buffer, "\n")] = '\0';

    std::printf("Enter Age: ");
    int age = 0;
    std::scanf("%d", &age);

    std::fgetc(stdin);

    std::printf("Enter Type: ");
    char user_type = '\0';
    std::scanf("%c", &user_type);

    std::fgetc(stdin);

    std::printf("Enter Distance: ");
    float distance = 0.0f;
    std::scanf("%f", &distance);

    std::printf("---------Summary----------\n");
    std::printf("Name: %s\n", name_buffer);
    std::printf("Age: %d\n", age);
    std::printf("User Type: %c\n", user_type);
    std::printf("Distance: %.1f\n", distance);

    return 0;
}