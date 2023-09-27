using System;

class Voiture
{
  
    public void Demarrer()
    {
        Console.WriteLine("La voiture démarre.");
    }

    public void Arreter()
    {
        Console.WriteLine("La voiture s'arrête.");
    }
}

class Moteur
{
   
    public void Allumer()
    {
        Console.WriteLine("Le moteur démarre.");
    }

    public void Eteindre()
    {
        Console.WriteLine("Le moteur s'éteint.");
    }
}

class Carrosserie
{
  
    public void OuvrirPortes()
    {
        Console.WriteLine("Les portes s'ouvrent.");
    }

    public void FermerPortes()
    {
        Console.WriteLine("Les portes se ferment.");
    }
}

class Roues
{
   
    public void Tourner()
    {
        Console.WriteLine("Les roues tournent.");
    }

    public void Arreter()
    {
        Console.WriteLine("Les roues s'arrêtent.");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Voiture maVoiture = new Voiture();
        Moteur monMoteur = new Moteur();
        Carrosserie maCarrosserie = new Carrosserie();
        Roues mesRoues = new Roues();

        Console.WriteLine("Application de gestion de voiture");
        Console.WriteLine("1. Démarrer la voiture");
        Console.WriteLine("2. Arrêter la voiture");
        Console.WriteLine("3. Quitter l'application");

        int choix;
        do
        {
            Console.Write("Entrez votre choix : ");
            choix = int.Parse(Console.ReadLine());

            switch (choix)
            {
                case 1:
                    maVoiture.Demarrer();
                    monMoteur.Allumer();
                    maCarrosserie.OuvrirPortes();
                    mesRoues.Tourner();
                    break;
                case 2:
                    maVoiture.Arreter();
                    monMoteur.Eteindre();
                    maCarrosserie.FermerPortes();
                    mesRoues.Arreter();
                    break;
                case 3:
                    Console.WriteLine("Au revoir !");
                    break;
                default:
                    Console.WriteLine("Choix invalide. Réessayez.");
                    break;
            }

        } while (choix != 3);
    }
}
