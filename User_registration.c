// User Registration Backend Logic

int main()
{
    char username[20], password[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    // Check if user already exists in DB
    // If user does not exist, add user to DB
    printf("User registered successfully\n");
    return 0;
}