Les flags de compilation sont des options fournies au compilateur pour modifier son comportement 
lors de la compilation d'un programme. Ils peuvent être utilisés pour ajuster les optimisations, 
contrôler les avertissements et les erreurs, et définir d'autres paramètres de compilation.

Les flags servent principalement à améliorer la qualité du code, à détecter les erreurs potentielles 
et à optimiser le code pour des performances spécifiques ou des cibles matérielles. 
Ils sont importants pour la sécurité des applications, car ils peuvent aider 
à identifier les problèmes de sécurité avant l'exécution du programme et à prévenir les vulnérabilités.

-Wall et -Wextra sont des flags de compilation utilisés avec le compilateur GCC (GNU Compiler Collection) 
pour activer des avertissements supplémentaires lors de la compilation du code.

-Wall : 
Ce flag active un ensemble d'avertissements de base qui sont généralement considérés comme utiles 
pour détecter les erreurs potentielles et les problèmes de qualité du code. 
Il est recommandé d'utiliser ce flag pour tous les projets afin d'encourager la qualité du code et de réduire le risque d'erreurs.

-Wextra : 
Ce flag active des avertissements supplémentaires qui ne sont pas inclus dans -Wall. 
Ces avertissements peuvent aider à détecter des problèmes moins courants ou des erreurs potentielles 
qui pourraient être ignorées avec -Wall. 
Il est recommandé d'utiliser ce flag pour augmenter la qualité du code et la sécurité des applications.
L'utilisation de ces flags pour la sécurité de l'application est importante car ils peuvent détecter des erreurs potentielles, 
des problèmes de qualité du code et des vulnérabilités avant que le programme ne soit exécuté. 
En utilisant ces flags, les développeurs peuvent corriger les problèmes avant qu'ils ne deviennent des failles de sécurité.

Voici quelques exemples de flags utiles pour la sécurité des applications :

-Wformat-security : 
Ce flag active des avertissements liés à la sécurité des fonctions de formatage telles que printf et scanf. 
Il peut aider à détecter les problèmes de formatage de chaîne qui pourraient entraîner des attaques d'injection de code.

-Wuninitialized : 
Ce flag avertit lorsqu'une variable est utilisée avant d'être initialisée, 
ce qui peut conduire à un comportement indéfini et potentiellement à des failles de sécurité.

-Wpointer-arith : 
Ce flag active des avertissements pour les opérations arithmétiques sur les pointeurs 
qui pourraient être dangereuses ou provoquer des problèmes de sécurité.

-fstack-protector et -fstack-protector-all : 
Ces flags activent la protection de la pile pour détecter et prévenir les attaques de débordement de tampon.