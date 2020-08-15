int main() 
{ 
    char s[] = "my_name_is_edcast_future_skills"; 
    int i = 0; 
    scanf("%s", s); 
    printf("\""); 
    while(s[i] != '\0') 
    { 
        if(s[i] != '_')
        {
            printf("%c", s[i]); 
            i++;
        } 
        else 
        {
            printf("\",\""); 
            i++;
        } 
    } 
    printf("\""); 
    return 0; 
}