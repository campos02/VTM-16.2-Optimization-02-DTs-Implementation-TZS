//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_16x16.h"

#include <string.h>
void DT_TZS_16x16::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[6] <= 0.5) {
            if (input[21] <= 969.5) {
                if (input[21] <= 581.5) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 334.0) {
                        memcpy(var0, (const double[]){0.002150537634408602, 0.9978494623655914}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.09009009009009009, 0.9099099099099099}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= -2.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[13] <= 2.0) {
                        if (input[17] <= 20.0) {
                            if (input[17] <= 16.0) {
                                memcpy(var0, (const double[]){0.012484394506866416, 0.9875156054931336}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[16] <= 2.0) {
                                        if (input[5] <= 360.0) {
                                            memcpy(var0, (const double[]){0.6111111111111112, 0.3888888888888889}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.17543859649122806, 0.8245614035087719}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[16] <= 2.0) {
                                if (input[16] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 10.0) {
                                        memcpy(var0, (const double[]){0.6041666666666666, 0.3958333333333333}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9524815205913411, 0.04751847940865892}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        if (input[11] <= 7.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[17] <= 13.5) {
                        if (input[17] <= 12.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[19] <= 6.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[17] <= 14.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[13] <= 2.0) {
                                if (input[13] <= -2.0) {
                                    if (input[20] <= 32.0) {
                                        if (input[22] <= -59.5) {
                                            if (input[14] <= -376.0) {
                                                if (input[23] <= -22.5) {
                                                    memcpy(var0, (const double[]){0.8821292775665399, 0.11787072243346007}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.041025641025641026, 0.958974358974359}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 24.5) {
                                                    memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8876860622462788, 0.11231393775372124}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[7] <= -14.0) {
                                                if (input[14] <= 2.0) {
                                                    if (input[13] <= -248.0) {
                                                        if (input[7] <= -224.0) {
                                                            if (input[21] <= 3035.5) {
                                                                memcpy(var0, (const double[]){0.6618705035971223, 0.3381294964028777}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3375, 0.6625}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.030303030303030304, 0.9696969696969697}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[13] <= -152.0) {
                                                            if (input[14] <= -56.0) {
                                                                memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9387040280210157, 0.06129597197898424}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4819277108433735, 0.5180722891566265}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[8] <= 14.0) {
                                                        memcpy(var0, (const double[]){0.04129793510324484, 0.9587020648967551}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[4] <= 1444.0) {
                                                            memcpy(var0, (const double[]){0.7980769230769231, 0.20192307692307693}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= -848.0) {
                                                                memcpy(var0, (const double[]){0.7912087912087912, 0.2087912087912088}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= 24.5) {
                                                                    memcpy(var0, (const double[]){0.2882882882882883, 0.7117117117117117}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5734265734265734, 0.42657342657342656}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.15053763440860216, 0.8494623655913979}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[7] <= -12.0) {
                                            if (input[7] <= -1168.0) {
                                                memcpy(var0, (const double[]){0.9742574257425742, 0.02574257425742574}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 428.0) {
                                                    if (input[14] <= -40.0) {
                                                        if (input[23] <= -9.5) {
                                                            memcpy(var0, (const double[]){0.8869565217391304, 0.11304347826086956}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 58855114.0) {
                                                                memcpy(var0, (const double[]){0.4143222506393862, 0.5856777493606138}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8292682926829268, 0.17073170731707318}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[4] <= 312.0) {
                                                            if (input[14] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.8095238095238095, 0.19047619047619047}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.1794871794871795, 0.8205128205128205}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[5] <= 1172.0) {
                                                        if (input[23] <= -32.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[4] <= 3184.0) {
                                                                memcpy(var0, (const double[]){0.7896373056994819, 0.21036269430051813}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9764705882352941, 0.023529411764705882}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9564375605033882, 0.04356243949661181}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.10843373493975904, 0.891566265060241}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[14] <= -2.0) {
                                        if (input[8] <= -12.0) {
                                            if (input[14] <= -18.0) {
                                                if (input[8] <= -28.0) {
                                                    if (input[14] <= -688.0) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= -68.0) {
                                                            if (input[8] <= -76.0) {
                                                                memcpy(var0, (const double[]){0.8079470198675497, 0.19205298013245034}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.02702702702702703, 0.972972972972973}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[6] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.6993865030674846, 0.3006134969325153}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.94, 0.06}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.112, 0.888}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9639344262295082, 0.036065573770491806}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.07371007371007371, 0.9262899262899262}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[14] <= 2.0) {
                                            if (input[15] <= 4.0) {
                                                if (input[8] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                } else {
                                                    if (input[22] <= -1.5) {
                                                        if (input[19] <= 6.5) {
                                                            memcpy(var0, (const double[]){0.8307692307692308, 0.16923076923076924}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.999616122840691, 0.00038387715930902113}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.44776119402985076, 0.5522388059701493}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[8] <= 12.0) {
                                                memcpy(var0, (const double[]){0.07239819004524888, 0.9276018099547512}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.859375, 0.140625}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[7] <= 14.0) {
                                    memcpy(var0, (const double[]){0.15879017013232513, 0.8412098298676749}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 1208.0) {
                                        if (input[1] <= 3.5) {
                                            memcpy(var0, (const double[]){0.22929936305732485, 0.7707006369426752}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 32.0) {
                                                memcpy(var0, (const double[]){0.4859504132231405, 0.5140495867768595}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 340.0) {
                                                    memcpy(var0, (const double[]){0.5258964143426295, 0.47410358565737054}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= 72.0) {
                                                        memcpy(var0, (const double[]){0.8212290502793296, 0.1787709497206704}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6277056277056277, 0.3722943722943723}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 24.5) {
                                            memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                        } else {
                                            if (input[6] <= 1.5) {
                                                memcpy(var0, (const double[]){0.9649122807017544, 0.03508771929824561}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[19] <= 6.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[17] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[6] <= 2.5) {
                        if (input[17] <= 17.5) {
                            if (input[11] <= 6.5) {
                                if (input[19] <= 6.5) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[5] <= 1284.0) {
                                            if (input[21] <= -1159804928.0) {
                                                memcpy(var0, (const double[]){0.7523510971786834, 0.2476489028213166}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 79319680.0) {
                                                    if (input[21] <= 1285.0) {
                                                        if (input[13] <= -248.0) {
                                                            memcpy(var0, (const double[]){0.3663003663003663, 0.6336996336996337}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 72.0) {
                                                                memcpy(var0, (const double[]){0.657030223390276, 0.34296977660972405}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.36904761904761907, 0.6309523809523809}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.39886039886039887, 0.6011396011396012}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6480186480186481, 0.351981351981352}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8379446640316206, 0.16205533596837945}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[13] <= 2.0) {
                                    if (input[22] <= -0.5) {
                                        if (input[21] <= 760.5) {
                                            if (input[20] <= 28.5) {
                                                memcpy(var0, (const double[]){0.8888888888888888, 0.1111111111111111}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9931818181818182, 0.006818181818181818}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[19] <= 6.5) {
                                                if (input[5] <= 696.0) {
                                                    if (input[14] <= -6.0) {
                                                        if (input[8] <= -6.0) {
                                                            memcpy(var0, (const double[]){0.6858168761220825, 0.3141831238779174}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.21428571428571427, 0.7857142857142857}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 6.0) {
                                                            if (input[16] <= 56.0) {
                                                                if (input[16] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.5131578947368421, 0.4868421052631579}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[15] <= -4.0) {
                                                                        if (input[13] <= -46.0) {
                                                                            if (input[13] <= -72.0) {
                                                                                if (input[7] <= -104.0) {
                                                                                    memcpy(var0, (const double[]){0.8529411764705882, 0.14705882352941177}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.48854961832061067, 0.5114503816793893}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9298701298701298, 0.07012987012987013}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5221238938053098, 0.4778761061946903}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[13] <= -6.0) {
                                                                            if (input[7] <= -14.0) {
                                                                                memcpy(var0, (const double[]){0.8421052631578947, 0.15789473684210525}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.3655913978494624, 0.6344086021505376}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 1.5) {
                                                                                memcpy(var0, (const double[]){0.7652173913043478, 0.23478260869565218}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9762237762237762, 0.023776223776223775}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.16091954022988506, 0.8390804597701149}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= 10.0) {
                                                                memcpy(var0, (const double[]){0.17989417989417988, 0.8201058201058201}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7257383966244726, 0.2742616033755274}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[22] <= -106.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.85546875, 0.14453125}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            if (input[22] <= 3.5) {
                                                memcpy(var0, (const double[]){0.37383177570093457, 0.6261682242990654}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8064516129032258, 0.1935483870967742}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[14] <= -8.0) {
                                                if (input[22] <= 32.5) {
                                                    if (input[21] <= 811.5) {
                                                        memcpy(var0, (const double[]){0.9534368070953437, 0.04656319290465632}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 35.0) {
                                                            if (input[8] <= -8.0) {
                                                                memcpy(var0, (const double[]){0.6846361185983828, 0.31536388140161725}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2595419847328244, 0.7404580152671756}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[3] <= 2.5) {
                                                                memcpy(var0, (const double[]){0.7181467181467182, 0.28185328185328185}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.9659863945578231, 0.034013605442176874}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7875, 0.2125}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9923371647509579, 0.007662835249042145}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[15] <= 8.0) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.7396593673965937, 0.26034063260340634}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= 8.0) {
                                                            if (input[14] <= 8.0) {
                                                                if (input[15] <= -8.0) {
                                                                    if (input[13] <= -8.0) {
                                                                        memcpy(var0, (const double[]){0.9935483870967742, 0.0064516129032258064}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.43902439024390244, 0.5609756097560976}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        memcpy(var0, (const double[]){0.9730983302411874, 0.026901669758812616}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9973023448848308, 0.0026976551151691223}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[8] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.417910447761194, 0.582089552238806}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8947368421052632, 0.10526315789473684}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[8] <= 8.0) {
                                                                memcpy(var0, (const double[]){0.6839080459770115, 0.3160919540229885}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9266770670826833, 0.07332293291731669}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        if (input[6] <= 1.5) {
                                                            memcpy(var0, (const double[]){0.17142857142857143, 0.8285714285714286}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[7] <= -32.0) {
                                                                memcpy(var0, (const double[]){0.8898678414096917, 0.11013215859030837}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6178861788617886, 0.3821138211382114}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[5] <= 696.0) {
                                                            memcpy(var0, (const double[]){0.8983050847457628, 0.1016949152542373}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9855907780979827, 0.01440922190201729}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[5] <= 740.0) {
                                        if (input[21] <= 1591.5) {
                                            if (input[20] <= 35.0) {
                                                if (input[21] <= 728.0) {
                                                    memcpy(var0, (const double[]){0.9225589225589226, 0.07744107744107744}, 2 * sizeof(double));
                                                } else {
                                                    if (input[7] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.3617021276595745, 0.6382978723404256}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7112970711297071, 0.28870292887029286}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.975, 0.025}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[4] <= 1016.0) {
                                                if (input[7] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.21487603305785125, 0.7851239669421488}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 40.5) {
                                                        if (input[18] <= 0.5) {
                                                            if (input[5] <= 452.0) {
                                                                memcpy(var0, (const double[]){0.3536404160475483, 0.6463595839524517}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5904059040590406, 0.4095940959409594}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7192982456140351, 0.2807017543859649}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[21] <= 4128.5) {
                                                            memcpy(var0, (const double[]){0.8725490196078431, 0.12745098039215685}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5310734463276836, 0.4689265536723164}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 36.0) {
                                                    memcpy(var0, (const double[]){0.5693430656934306, 0.4306569343065693}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8647342995169082, 0.13526570048309178}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[20] <= 35.0) {
                                            memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                        } else {
                                            if (input[22] <= 51.5) {
                                                memcpy(var0, (const double[]){0.9335548172757475, 0.0664451827242525}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[19] <= 6.5) {
                                    if (input[17] <= 19.5) {
                                        if (input[11] <= 6.5) {
                                            if (input[5] <= 1452.0) {
                                                memcpy(var0, (const double[]){0.5396825396825397, 0.4603174603174603}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[21] <= 888.5) {
                                                if (input[20] <= 28.5) {
                                                    memcpy(var0, (const double[]){0.8336192109777015, 0.16638078902229847}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.9911504424778761, 0.008849557522123894}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 35.0) {
                                                    if (input[21] <= 2308.5) {
                                                        if (input[15] <= -18.0) {
                                                            memcpy(var0, (const double[]){0.5040650406504065, 0.4959349593495935}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= -30.0) {
                                                                memcpy(var0, (const double[]){0.5072463768115942, 0.4927536231884058}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7924528301886793, 0.20754716981132076}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.42338709677419356, 0.5766129032258065}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 2355.5) {
                                                        memcpy(var0, (const double[]){0.9153846153846154, 0.08461538461538462}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[5] <= 516.0) {
                                                            if (input[14] <= -40.0) {
                                                                memcpy(var0, (const double[]){0.32432432432432434, 0.6756756756756757}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.651252408477842, 0.348747591522158}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.81089258698941, 0.18910741301059}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 21.5) {
                                                if (input[20] <= 33.0) {
                                                    if (input[22] <= -6.5) {
                                                        if (input[4] <= 1112.0) {
                                                            memcpy(var0, (const double[]){0.5465116279069767, 0.45348837209302323}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.1728395061728395, 0.8271604938271605}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6575342465753424, 0.3424657534246575}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.31746031746031744, 0.6825396825396826}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.6961770623742455, 0.3038229376257545}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8663239074550129, 0.13367609254498714}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 22.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 33.0) {
                                                        if (input[21] <= 220.5) {
                                                            if (input[6] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.02127659574468085, 0.9787234042553191}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[21] <= -103994368.0) {
                                                                    memcpy(var0, (const double[]){0.810126582278481, 0.189873417721519}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4888888888888889, 0.5111111111111111}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[6] <= 1.5) {
                                                                if (input[17] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.6568265682656826, 0.34317343173431736}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.608, 0.392}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8643815201192251, 0.13561847988077497}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6045627376425855, 0.39543726235741444}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 23.5) {
                                                            if (input[6] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.33707865168539325, 0.6629213483146067}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[22] <= -0.5) {
                                                                    memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.903448275862069, 0.09655172413793103}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.746031746031746, 0.25396825396825395}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.7737704918032787, 0.2262295081967213}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9070331447049312, 0.09296685529506872}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[20] <= 24.5) {
                            memcpy(var0, (const double[]){0.37681159420289856, 0.6231884057971014}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.030418250950570342, 0.9695817490494296}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.1707865168539326, 0.8292134831460675}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[19] <= 6.5) {
                if (input[17] <= 15.5) {
                    if (input[6] <= 0.5) {
                        if (input[11] <= 8.5) {
                            if (input[17] <= 14.5) {
                                if (input[17] <= 13.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[17] <= 13.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[15] <= -188.0) {
                                    if (input[20] <= 33.5) {
                                        memcpy(var0, (const double[]){0.14055394791236048, 0.8594460520876395}, 2 * sizeof(double));
                                    } else {
                                        if (input[23] <= 19.5) {
                                            memcpy(var0, (const double[]){0.2911764705882353, 0.7088235294117647}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[8] <= 36.0) {
                                        if (input[5] <= 1464.0) {
                                            if (input[21] <= -1048004224.0) {
                                                memcpy(var0, (const double[]){0.24, 0.76}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.08773968622893666, 0.9122603137710633}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.3252032520325203, 0.6747967479674797}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.03885135135135135, 0.9611486486486487}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[11] <= 8.5) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 26.0) {
                                        if (input[21] <= -621071744.0) {
                                            memcpy(var0, (const double[]){0.4722222222222222, 0.5277777777777778}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.2014846235418876, 0.7985153764581124}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[14] <= 12.0) {
                                            memcpy(var0, (const double[]){0.4541139240506329, 0.5458860759493671}, 2 * sizeof(double));
                                        } else {
                                            if (input[8] <= 28.0) {
                                                memcpy(var0, (const double[]){0.09389671361502347, 0.9061032863849765}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.39574468085106385, 0.6042553191489362}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 0.5) {
                                    if (input[12] <= 3.0) {
                                        if (input[4] <= 916.0) {
                                            if (input[1] <= 3.5) {
                                                memcpy(var0, (const double[]){0.02318840579710145, 0.9768115942028985}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.130173775671406, 0.869826224328594}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[21] <= 3324.5) {
                                                memcpy(var0, (const double[]){0.044762757385854966, 0.955237242614145}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.09728183118741059, 0.9027181688125894}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[11] <= 10.5) {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 193.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.13305613305613306, 0.8669438669438669}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[20] <= 27.0) {
                                                if (input[21] <= -621071744.0) {
                                                    memcpy(var0, (const double[]){0.6016260162601627, 0.3983739837398374}, 2 * sizeof(double));
                                                } else {
                                                    if (input[14] <= 88.0) {
                                                        memcpy(var0, (const double[]){0.2901960784313726, 0.7098039215686275}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.11371237458193979, 0.8862876254180602}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= 8.0) {
                                                    if (input[12] <= 3.0) {
                                                        if (input[11] <= 9.5) {
                                                            if (input[0] <= 29.5) {
                                                                if (input[21] <= 1018.5) {
                                                                    if (input[20] <= 30.5) {
                                                                        memcpy(var0, (const double[]){0.2535211267605634, 0.7464788732394366}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6557377049180327, 0.3442622950819672}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.23673469387755103, 0.763265306122449}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 2115.5) {
                                                                    memcpy(var0, (const double[]){0.6611570247933884, 0.33884297520661155}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[5] <= 792.0) {
                                                                        if (input[21] <= 3490457.5) {
                                                                            memcpy(var0, (const double[]){0.300561797752809, 0.699438202247191}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6017699115044248, 0.39823008849557523}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[21] <= 8270.0) {
                                                                            memcpy(var0, (const double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.26229508196721313, 0.7377049180327869}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[0] <= 29.5) {
                                                                if (input[14] <= 12.0) {
                                                                    memcpy(var0, (const double[]){0.5943152454780362, 0.40568475452196384}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.303886925795053, 0.696113074204947}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6709844559585493, 0.3290155440414508}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[21] <= 1251.0) {
                                                            memcpy(var0, (const double[]){0.9659863945578231, 0.034013605442176874}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7755102040816326, 0.22448979591836735}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[21] <= 1004.5) {
                                                        memcpy(var0, (const double[]){0.6792452830188679, 0.32075471698113206}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.18994413407821228, 0.8100558659217877}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[21] <= 3522.5) {
                                            if (input[21] <= -481495296.0) {
                                                memcpy(var0, (const double[]){0.2358974358974359, 0.764102564102564}, 2 * sizeof(double));
                                            } else {
                                                if (input[14] <= -632.0) {
                                                    memcpy(var0, (const double[]){0.32786885245901637, 0.6721311475409836}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.05656565656565657, 0.9434343434343434}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[15] <= -840.0) {
                                                memcpy(var0, (const double[]){0.3673469387755102, 0.6326530612244898}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.15160349854227406, 0.8483965014577259}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 21.5) {
                                            if (input[11] <= 12.5) {
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 378.0) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2742857142857143, 0.7257142857142858}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[20] <= 33.0) {
                                                        if (input[11] <= 11.5) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[14] <= 60.0) {
                                                                    memcpy(var0, (const double[]){0.3157894736842105, 0.6842105263157895}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.17635270541082165, 0.8236472945891784}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[12] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.8148148148148148, 0.18518518518518517}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 1016.0) {
                                                                        memcpy(var0, (const double[]){0.6470588235294118, 0.35294117647058826}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.143646408839779, 0.856353591160221}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[6] <= 1.5) {
                                                                if (input[4] <= 1676.0) {
                                                                    memcpy(var0, (const double[]){0.5079365079365079, 0.49206349206349204}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.21761658031088082, 0.7823834196891192}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6030534351145038, 0.3969465648854962}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[12] <= 8.0) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[11] <= 9.5) {
                                                                    memcpy(var0, (const double[]){0.4014336917562724, 0.5985663082437276}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6120141342756183, 0.38798586572438165}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8994708994708994, 0.10052910052910052}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2765957446808511, 0.723404255319149}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 813.0) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.125, 0.875}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= 29.5) {
                                                        if (input[4] <= 440.0) {
                                                            memcpy(var0, (const double[]){0.2695417789757412, 0.7304582210242587}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 2330.5) {
                                                                memcpy(var0, (const double[]){0.06739345887016848, 0.9326065411298315}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[21] <= 41003904.0) {
                                                                    memcpy(var0, (const double[]){0.2177121771217712, 0.7822878228782287}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.024691358024691357, 0.9753086419753086}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[11] <= 13.5) {
                                                            memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3183673469387755, 0.6816326530612244}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    if (input[11] <= 14.5) {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 819.0) {
                                                                memcpy(var0, (const double[]){0.007858546168958742, 0.9921414538310412}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 9.5) {
                                                                    memcpy(var0, (const double[]){0.5853658536585366, 0.4146341463414634}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.24888888888888888, 0.7511111111111111}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 11.5) {
                                                                if (input[11] <= 10.5) {
                                                                    memcpy(var0, (const double[]){0.41529235382308843, 0.5847076461769115}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.3469879518072289, 0.653012048192771}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.17253521126760563, 0.8274647887323944}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[20] <= 27.0) {
                                                                    if (input[6] <= 2.5) {
                                                                        if (input[4] <= 2120.0) {
                                                                            memcpy(var0, (const double[]){0.417910447761194, 0.582089552238806}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.13541666666666666, 0.8645833333333334}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6108374384236454, 0.3891625615763547}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6293416277864178, 0.37065837221358217}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 838.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.1732283464566929, 0.8267716535433071}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= 24.5) {
                                                                if (input[15] <= -884.0) {
                                                                    memcpy(var0, (const double[]){0.30303030303030304, 0.696969696969697}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0940649496080627, 0.9059350503919373}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[11] <= 15.5) {
                                                                    memcpy(var0, (const double[]){0.07194244604316546, 0.9280575539568345}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2934472934472934, 0.7065527065527065}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[11] <= 16.5) {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[21] <= 436.5) {
                                                                        memcpy(var0, (const double[]){0.004464285714285714, 0.9955357142857143}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[11] <= 11.5) {
                                                                            memcpy(var0, (const double[]){0.5263157894736842, 0.47368421052631576}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.23699421965317918, 0.7630057803468208}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[11] <= 13.5) {
                                                                        if (input[18] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.4332129963898917, 0.5667870036101083}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[6] <= 2.5) {
                                                                                memcpy(var0, (const double[]){0.35412474849094566, 0.6458752515090543}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.08695652173913043, 0.9130434782608695}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[20] <= 28.5) {
                                                                            if (input[13] <= -484.0) {
                                                                                memcpy(var0, (const double[]){0.6702127659574468, 0.32978723404255317}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[6] <= 2.5) {
                                                                                    if (input[16] <= -8.0) {
                                                                                        memcpy(var0, (const double[]){0.5319148936170213, 0.46808510638297873}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.17061611374407584, 0.8293838862559242}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6285714285714286, 0.37142857142857144}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6963168867268936, 0.3036831132731063}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[21] <= 617.0) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1411764705882353, 0.8588235294117647}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[5] <= 1388.0) {
                                                                        if (input[0] <= 29.5) {
                                                                            if (input[8] <= 60.0) {
                                                                                memcpy(var0, (const double[]){0.2493573264781491, 0.7506426735218509}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[15] <= -840.0) {
                                                                                    memcpy(var0, (const double[]){0.39436619718309857, 0.6056338028169014}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.07809847198641766, 0.9219015280135824}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.3223684210526316, 0.6776315789473685}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.562874251497006, 0.437125748502994}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 575.5) {
                                                                            memcpy(var0, (const double[]){0.002702702702702703, 0.9972972972972973}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.5949008498583569, 0.40509915014164305}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 12.0) {
                                                                                    memcpy(var0, (const double[]){0.37410071942446044, 0.6258992805755396}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.09811320754716982, 0.9018867924528302}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 18.5) {
                                                                            if (input[11] <= 15.5) {
                                                                                if (input[12] <= 10.0) {
                                                                                    memcpy(var0, (const double[]){0.4262508122157245, 0.5737491877842755}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.2018348623853211, 0.7981651376146789}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[4] <= 120.0) {
                                                                                    memcpy(var0, (const double[]){0.9791666666666666, 0.020833333333333332}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[15] <= -460.0) {
                                                                                        memcpy(var0, (const double[]){0.7630252100840336, 0.23697478991596638}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[20] <= 34.5) {
                                                                                            if (input[4] <= 2172.0) {
                                                                                                memcpy(var0, (const double[]){0.5803921568627451, 0.4196078431372549}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.2988505747126437, 0.7011494252873564}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.7239263803680982, 0.27607361963190186}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[0] <= 24.5) {
                                                                                if (input[16] <= -4.0) {
                                                                                    memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[15] <= -716.0) {
                                                                                        memcpy(var0, (const double[]){0.4126984126984127, 0.5873015873015873}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.09106830122591944, 0.9089316987740805}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.38510301109350237, 0.6148969889064976}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 29.5) {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[21] <= 443.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 0.5) {
                                                                                        if (input[11] <= 17.5) {
                                                                                            memcpy(var0, (const double[]){0.5897435897435898, 0.41025641025641024}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[11] <= 14.0) {
                                                                                            memcpy(var0, (const double[]){0.28901734104046245, 0.7109826589595376}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.03076923076923077, 0.9692307692307692}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[11] <= 20.5) {
                                                                                    if (input[11] <= 17.5) {
                                                                                        if (input[20] <= 39.0) {
                                                                                            memcpy(var0, (const double[]){0.34275296262534183, 0.6572470373746582}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.5348189415041783, 0.46518105849582175}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[20] <= 28.5) {
                                                                                            if (input[6] <= 2.5) {
                                                                                                if (input[4] <= 2272.0) {
                                                                                                    memcpy(var0, (const double[]){0.5054151624548736, 0.49458483754512633}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.13043478260869565, 0.8695652173913043}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.8108108108108109, 0.1891891891891892}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.7239150507848569, 0.2760849492151431}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[0] <= 24.5) {
                                                                                        if (input[16] <= -88.0) {
                                                                                            memcpy(var0, (const double[]){0.45569620253164556, 0.5443037974683544}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.14065180102915953, 0.8593481989708405}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.3665480427046263, 0.6334519572953736}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 30.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 31.5) {
                                                                                    if (input[11] <= 22.5) {
                                                                                        if (input[6] <= 0.5) {
                                                                                            if (input[21] <= 742.5) {
                                                                                                memcpy(var0, (const double[]){0.0072992700729927005, 0.9927007299270073}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 14.0) {
                                                                                                        memcpy(var0, (const double[]){0.4696969696969697, 0.5303030303030303}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.061855670103092786, 0.9381443298969072}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[11] <= 19.5) {
                                                                                                memcpy(var0, (const double[]){0.4622093023255814, 0.5377906976744186}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[0] <= 24.5) {
                                                                                                    if (input[6] <= 1.5) {
                                                                                                        memcpy(var0, (const double[]){0.33986928104575165, 0.6601307189542484}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.711864406779661, 0.288135593220339}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.8210961737331954, 0.17890382626680454}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[6] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.006734006734006734, 0.9932659932659933}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[20] <= 28.5) {
                                                                                                if (input[6] <= 2.5) {
                                                                                                    if (input[15] <= -544.0) {
                                                                                                        memcpy(var0, (const double[]){0.3838383838383838, 0.6161616161616161}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[15] <= 40.0) {
                                                                                                            memcpy(var0, (const double[]){0.04793028322440087, 0.9520697167755992}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.3561643835616438, 0.6438356164383562}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5569620253164557, 0.4430379746835443}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.3624868282402529, 0.6375131717597471}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[17] <= 32.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 0.5) {
                                                                                            if (input[6] <= 2.5) {
                                                                                                if (input[17] <= 33.5) {
                                                                                                    if (input[11] <= 24.5) {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            if (input[21] <= 536.0) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.5859872611464968, 0.4140127388535032}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 21.5) {
                                                                                                                if (input[0] <= 29.5) {
                                                                                                                    memcpy(var0, (const double[]){0.30340557275541796, 0.6965944272445821}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.5603112840466926, 0.4396887159533074}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[15] <= -1672.0) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[0] <= 24.5) {
                                                                                                                        memcpy(var0, (const double[]){0.5384615384615384, 0.46153846153846156}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.7904411764705882, 0.20955882352941177}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.024, 0.976}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[5] <= 1388.0) {
                                                                                                                if (input[11] <= 27.0) {
                                                                                                                    memcpy(var0, (const double[]){0.18786127167630057, 0.8121387283236994}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.36942675159235666, 0.6305732484076433}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.6111111111111112, 0.3888888888888889}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 34.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 35.5) {
                                                                                                            if (input[11] <= 26.5) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    if (input[21] <= 620.0) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.5512820512820513, 0.44871794871794873}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 25.5) {
                                                                                                                        if (input[0] <= 29.5) {
                                                                                                                            memcpy(var0, (const double[]){0.41927710843373495, 0.5807228915662651}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.7094594594594594, 0.2905405405405405}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.8007312614259597, 0.19926873857404023}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[0] <= 29.5) {
                                                                                                                        if (input[11] <= 29.0) {
                                                                                                                            memcpy(var0, (const double[]){0.10176991150442478, 0.8982300884955752}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.3, 0.7}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.3944636678200692, 0.6055363321799307}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[17] <= 36.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 37.5) {
                                                                                                                    if (input[11] <= 28.5) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            if (input[21] <= 503.0) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.46464646464646464, 0.5353535353535354}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 27.5) {
                                                                                                                                if (input[20] <= 27.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.30434782608695654, 0.6956521739130435}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.6615384615384615, 0.3384615384615385}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.8305785123966942, 0.16942148760330578}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            memcpy(var0, (const double[]){0.010050251256281407, 0.9899497487437185}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[21] <= 1290542464.0) {
                                                                                                                                memcpy(var0, (const double[]){0.2675496688741722, 0.7324503311258278}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 38.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 39.5) {
                                                                                                                            if (input[11] <= 30.5) {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    if (input[21] <= 545.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.3684210526315789, 0.631578947368421}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 29.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.5843621399176955, 0.4156378600823045}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.8527472527472527, 0.14725274725274726}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[15] <= 192.0) {
                                                                                                                                        if (input[15] <= -904.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.45569620253164556, 0.5443037974683544}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.12277227722772277, 0.8772277227722772}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.6557377049180327, 0.3442622950819672}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 40.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 41.5) {
                                                                                                                                    if (input[11] <= 32.5) {
                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                            if (input[21] <= 332.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.4943820224719101, 0.5056179775280899}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[11] <= 18.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.3023255813953488, 0.6976744186046512}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.7608346709470305, 0.2391653290529695}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.21524663677130046, 0.7847533632286996}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 42.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 43.5) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                if (input[21] <= 918.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.43333333333333335, 0.5666666666666667}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 34.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.672566371681416, 0.3274336283185841}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.27722772277227725, 0.7227722772277227}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 44.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 45.5) {
                                                                                                                                                    if (input[11] <= 37.0) {
                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                            if (input[11] <= 25.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[11] <= 35.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.5549738219895288, 0.44502617801047123}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.8807339449541285, 0.11926605504587157}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.061016949152542375, 0.9389830508474576}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 46.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 47.5) {
                                                                                                                                                            if (input[11] <= 39.0) {
                                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.1391304347826087, 0.8608695652173913}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[11] <= 29.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.49382716049382713, 0.5061728395061729}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.8859060402684564, 0.11409395973154363}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.01990049751243781, 0.9800995024875622}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 48.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 49.5) {
                                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.031914893617021274, 0.9680851063829787}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.5135135135135135, 0.4864864864864865}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 50.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 51.5) {
                                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.06201550387596899, 0.937984496124031}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.5573770491803278, 0.4426229508196721}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[17] <= 52.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[20] <= 36.5) {
                                                                                                                                                                                    if (input[4] <= 1896.0) {
                                                                                                                                                                                        if (input[22] <= -647.5) {
                                                                                                                                                                                            memcpy(var0, (const double[]){0.9846153846153847, 0.015384615384615385}, 2 * sizeof(double));
                                                                                                                                                                                        } else {
                                                                                                                                                                                            if (input[14] <= 440.0) {
                                                                                                                                                                                                memcpy(var0, (const double[]){0.7297297297297297, 0.2702702702702703}, 2 * sizeof(double));
                                                                                                                                                                                            } else {
                                                                                                                                                                                                memcpy(var0, (const double[]){0.4294478527607362, 0.5705521472392638}, 2 * sizeof(double));
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    } else {
                                                                                                                                                                                        memcpy(var0, (const double[]){0.03278688524590164, 0.9672131147540983}, 2 * sizeof(double));
                                                                                                                                                                                    }
                                                                                                                                                                                } else {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.9025270758122743, 0.09747292418772563}, 2 * sizeof(double));
                                                                                                                                                                                }
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 33.5) {
                                                                                                    memcpy(var0, (const double[]){0.6851549755301795, 0.31484502446982054}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[20] <= 24.5) {
                                                                                                        if (input[4] <= 3276.0) {
                                                                                                            if (input[21] <= 943.0) {
                                                                                                                memcpy(var0, (const double[]){0.7483870967741936, 0.25161290322580643}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 47.5) {
                                                                                                                    memcpy(var0, (const double[]){0.961755485893417, 0.03824451410658307}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.9973474801061007, 0.002652519893899204}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.7536231884057971, 0.2463768115942029}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[20] <= 27.0) {
                                                                                                            memcpy(var0, (const double[]){0.6384364820846905, 0.36156351791530944}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 34.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 35.5) {
                                                                                                                    if (input[11] <= 27.0) {
                                                                                                                        memcpy(var0, (const double[]){0.7836990595611285, 0.21630094043887146}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.3584905660377358, 0.6415094339622641}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 36.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 37.5) {
                                                                                                                            memcpy(var0, (const double[]){0.6942148760330579, 0.30578512396694213}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 38.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 39.5) {
                                                                                                                                    if (input[11] <= 31.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.861244019138756, 0.13875598086124402}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.2736842105263158, 0.7263157894736842}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 40.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 41.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.7372262773722628, 0.26277372262773724}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 42.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 43.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.8095238095238095, 0.19047619047619047}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 44.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[20] <= 30.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.9624413145539906, 0.03755868544600939}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.8704453441295547, 0.12955465587044535}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                if (input[20] <= 44.0) {
                                                                                                    if (input[11] <= 14.0) {
                                                                                                        memcpy(var0, (const double[]){0.6352941176470588, 0.36470588235294116}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[11] <= 34.0) {
                                                                                                            if (input[17] <= 45.5) {
                                                                                                                memcpy(var0, (const double[]){0.26477935054121565, 0.7352206494587843}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[14] <= -2.0) {
                                                                                                                    memcpy(var0, (const double[]){0.7186147186147186, 0.2813852813852814}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.3865979381443299, 0.6134020618556701}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.091324200913242, 0.908675799086758}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[6] <= 2.5) {
                                                                                                    if (input[0] <= 29.5) {
                                                                                                        memcpy(var0, (const double[]){0.535031847133758, 0.46496815286624205}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 35.5) {
                                                                                                            memcpy(var0, (const double[]){0.5683760683760684, 0.43162393162393164}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 36.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.7269772481040087, 0.27302275189599134}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[21] <= 3255.0) {
                                                                                                        memcpy(var0, (const double[]){0.40824742268041236, 0.5917525773195876}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.13670886075949368, 0.8632911392405064}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
