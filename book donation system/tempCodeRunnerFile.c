fprintf(fp, "%s %s %s %s %s %s\n", donor.name, donor.author, donor.title, donor.phone, donor.address, donor.email);
    fclose(fp);
    printf("Record added successfully\n");