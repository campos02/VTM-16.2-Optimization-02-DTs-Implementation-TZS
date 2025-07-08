//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_128x128.h"

#include <string.h>
void DT_TZS_128x128::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[6] <= 0.5) {
                if (input[21] <= 305972.0) {
                    memcpy(var0, (const double[]){0.0014627994955863808, 0.9985372005044136}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 16.0) {
                        memcpy(var0, (const double[]){0.005192107995846314, 0.9948078920041536}, 2 * sizeof(double));
                    } else {
                        if (input[13] <= -10.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.4742857142857143, 0.5257142857142857}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[12] <= 8.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[17] <= 12.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 13.5) {
                            memcpy(var0, (const double[]){0.0006464124111182935, 0.9993535875888817}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    if (input[7] <= -88.0) {
                                        if (input[23] <= 15.5) {
                                            if (input[23] <= -23.5) {
                                                memcpy(var0, (const double[]){0.9775280898876404, 0.02247191011235955}, 2 * sizeof(double));
                                            } else {
                                                if (input[14] <= -340.0) {
                                                    memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= -1064.0) {
                                                        memcpy(var0, (const double[]){0.6423963133640553, 0.3576036866359447}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.36993137866500314, 0.6300686213349969}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9708029197080292, 0.029197080291970802}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.07228915662650602, 0.927710843373494}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[13] <= 2.0) {
                                        if (input[14] <= 2.0) {
                                            if (input[14] <= -2.0) {
                                                if (input[8] <= -28.0) {
                                                    memcpy(var0, (const double[]){0.6697247706422018, 0.3302752293577982}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0764872521246459, 0.9235127478753541}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.993933265925177, 0.006066734074823054}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.033860045146726865, 0.9661399548532731}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[22] <= 1.5) {
                                            memcpy(var0, (const double[]){0.02155887230514096, 0.978441127694859}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.67, 0.33}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[17] <= 14.5) {
                        if (input[17] <= 13.5) {
                            if (input[17] <= 12.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[11] <= 7.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[15] <= -204.0) {
                                memcpy(var0, (const double[]){0.2181536874677669, 0.7818463125322331}, 2 * sizeof(double));
                            } else {
                                if (input[12] <= 3.0) {
                                    memcpy(var0, (const double[]){0.08148148148148149, 0.9185185185185185}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[17] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 7.5) {
                        if (input[21] <= 39301.0) {
                            if (input[6] <= 2.5) {
                                if (input[13] <= 2.0) {
                                    if (input[14] <= 2.0) {
                                        if (input[14] <= -2.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[8] <= -14.0) {
                                                    memcpy(var0, (const double[]){0.5864022662889519, 0.41359773371104813}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.23897058823529413, 0.7610294117647058}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5858453473132372, 0.41415465268676277}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[16] <= 14.0) {
                                                if (input[16] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.5171026156941649, 0.482897384305835}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= 1088.0) {
                                                        if (input[4] <= 64.0) {
                                                            memcpy(var0, (const double[]){0.7035445757250268, 0.2964554242749731}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 19269.5) {
                                                                memcpy(var0, (const double[]){0.6179775280898876, 0.38202247191011235}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.914751358127873, 0.08524864187212704}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6597222222222222, 0.3402777777777778}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.2264808362369338, 0.7735191637630662}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7297297297297297, 0.2702702702702703}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 17.5) {
                                            memcpy(var0, (const double[]){0.36795774647887325, 0.6320422535211268}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.35855263157894735, 0.6414473684210527}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6313823163138231, 0.3686176836861768}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 19.5) {
                                        if (input[13] <= 14.0) {
                                            memcpy(var0, (const double[]){0.04559270516717325, 0.9544072948328267}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.46536412078152756, 0.5346358792184724}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5682926829268292, 0.4317073170731707}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 17.5) {
                                    memcpy(var0, (const double[]){0.07079646017699115, 0.9292035398230089}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5019157088122606, 0.49808429118773945}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[6] <= 2.5) {
                                if (input[12] <= 1.0) {
                                    if (input[15] <= -2.0) {
                                        if (input[17] <= 17.5) {
                                            if (input[16] <= -352.0) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= -52.0) {
                                                    memcpy(var0, (const double[]){0.6233040702314445, 0.3766959297685555}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.23893805309734514, 0.7610619469026548}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7429227237949503, 0.2570772762050497}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[15] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[17] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.3960216998191682, 0.6039783001808319}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9395866454689984, 0.06041335453100159}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[14] <= -2.0) {
                                                    if (input[17] <= 17.5) {
                                                        memcpy(var0, (const double[]){0.344, 0.656}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8636363636363636, 0.13636363636363635}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= 2.0) {
                                                        if (input[17] <= 18.5) {
                                                            if (input[17] <= 17.5) {
                                                                if (input[13] <= 6.0) {
                                                                    if (input[13] <= -8.0) {
                                                                        memcpy(var0, (const double[]){0.6954314720812182, 0.30456852791878175}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[14] <= 12.0) {
                                                                            memcpy(var0, (const double[]){0.9788747574908385, 0.02112524250916146}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.3870967741935484, 0.6129032258064516}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5053763440860215, 0.4946236559139785}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7906137184115524, 0.20938628158844766}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6190476190476191, 0.38095238095238093}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 320.0) {
                                                memcpy(var0, (const double[]){0.5364485981308411, 0.4635514018691589}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7817504655493482, 0.21824953445065176}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[6] <= 0.5) {
                                        if (input[20] <= 43.0) {
                                            memcpy(var0, (const double[]){0.831672203765227, 0.16832779623477298}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 8.0) {
                                            if (input[14] <= -8.0) {
                                                memcpy(var0, (const double[]){0.7557436517533253, 0.24425634824667472}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.8357771260997068, 0.16422287390029325}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= 8.0) {
                                                        if (input[16] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.8152610441767069, 0.18473895582329317}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.993502877297197, 0.006497122702803044}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9110546378653113, 0.08894536213468869}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[8] <= -24.0) {
                                                memcpy(var0, (const double[]){0.9759277833500501, 0.024072216649949848}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7481751824817519, 0.2518248175182482}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 17.5) {
                                    if (input[11] <= 6.5) {
                                        memcpy(var0, (const double[]){0.5238095238095238, 0.47619047619047616}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.03414634146341464, 0.9658536585365853}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.3939393939393939, 0.6060606060606061}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[11] <= 8.5) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.5002058460271717, 0.49979415397282834}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 9.5) {
                                    if (input[12] <= 3.0) {
                                        memcpy(var0, (const double[]){0.035015916325602546, 0.9649840836743975}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.01773049645390071, 0.9822695035460993}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.18396946564885497, 0.816030534351145}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[11] <= 10.5) {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 17406.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.25328330206378985, 0.7467166979362101}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[5] <= 960.0) {
                                                if (input[18] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.49612403100775193, 0.5038759689922481}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3278443113772455, 0.6721556886227545}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.6488413547237076, 0.3511586452762923}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[11] <= 11.5) {
                                            memcpy(var0, (const double[]){0.029336734693877552, 0.9706632653061225}, 2 * sizeof(double));
                                        } else {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.011345218800648298, 0.9886547811993517}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.23387096774193547, 0.7661290322580645}, 2 * sizeof(double));
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
                                                    if (input[21] <= 18027.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3959429000751315, 0.6040570999248686}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[9] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.5013187259078921, 0.49868127409210794}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8047493403693932, 0.19525065963060687}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.035202086049543675, 0.9647979139504563}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.1943859649122807, 0.8056140350877193}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    if (input[11] <= 14.5) {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 15715.0) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3409490333919156, 0.6590509666080844}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5011990407673861, 0.4988009592326139}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.15225334957369063, 0.8477466504263094}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[11] <= 16.5) {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[21] <= 8316.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4262626262626263, 0.5737373737373738}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5054545454545455, 0.49454545454545457}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.18093819806403574, 0.8190618019359642}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 27.5) {
                                                                    if (input[11] <= 18.5) {
                                                                        if (input[6] <= 0.5) {
                                                                            if (input[21] <= 15417.0) {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.46013986013986014, 0.5398601398601398}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5146409947853992, 0.4853590052146009}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.16859504132231404, 0.8314049586776859}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 28.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 29.5) {
                                                                            if (input[11] <= 20.5) {
                                                                                if (input[6] <= 0.5) {
                                                                                    if (input[21] <= 17116.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.4584615384615385, 0.5415384615384615}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5674350171652771, 0.4325649828347229}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.15897435897435896, 0.841025641025641}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[17] <= 30.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[21] <= 79658.0) {
                                                                                    if (input[17] <= 31.5) {
                                                                                        if (input[11] <= 22.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                if (input[21] <= 19876.5) {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5909090909090909, 0.4090909090909091}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6773080241587576, 0.32269197584124243}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.15229357798165138, 0.8477064220183487}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 32.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 33.5) {
                                                                                                if (input[11] <= 25.0) {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        if (input[21] <= 10702.0) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.58, 0.42}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6906278434940856, 0.3093721565059145}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.1544256120527307, 0.8455743879472694}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 34.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[17] <= 35.5) {
                                                                                                        if (input[11] <= 27.0) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[21] <= 24410.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0044444444444444444, 0.9955555555555555}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.5555555555555556, 0.4444444444444444}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 21.0) {
                                                                                                                    memcpy(var0, (const double[]){0.3710691823899371, 0.6289308176100629}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.8283062645011601, 0.1716937354988399}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.24238026124818576, 0.7576197387518142}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 36.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 37.5) {
                                                                                                                if (input[6] <= 0.5) {
                                                                                                                    if (input[21] <= 19721.0) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[11] <= 29.0) {
                                                                                                                        memcpy(var0, (const double[]){0.7243107769423559, 0.2756892230576441}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.23952095808383234, 0.7604790419161677}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[17] <= 38.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 39.5) {
                                                                                                                        if (input[11] <= 31.0) {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                memcpy(var0, (const double[]){0.07692307692307693, 0.9230769230769231}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.7980636237897649, 0.20193637621023514}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.14956736711990112, 0.8504326328800988}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 40.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 41.5) {
                                                                                                                                if (input[11] <= 33.0) {
                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.07975460122699386, 0.9202453987730062}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 27.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.3493975903614458, 0.6506024096385542}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.9066874027993779, 0.09331259720062209}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.12482853223593965, 0.8751714677640604}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 42.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 43.5) {
                                                                                                                                        if (input[11] <= 35.0) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 31.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.42168674698795183, 0.5783132530120482}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.9461279461279462, 0.05387205387205387}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.09882747068676717, 0.9011725293132329}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 44.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 45.5) {
                                                                                                                                                if (input[11] <= 37.0) {
                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.025, 0.975}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.9, 0.1}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.09505703422053231, 0.9049429657794676}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 46.5) {
                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 47.5) {
                                                                                                                                                        if (input[11] <= 39.0) {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.11764705882352941, 0.8823529411764706}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.8728813559322034, 0.1271186440677966}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.06444906444906445, 0.9355509355509356}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 48.5) {
                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 49.5) {
                                                                                                                                                                if (input[11] <= 40.5) {
                                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.9303135888501742, 0.06968641114982578}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 50.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 51.5) {
                                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[11] <= 43.0) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.912621359223301, 0.08737864077669903}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.13953488372093023, 0.8604651162790697}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 52.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[22] <= -290.0) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.9180672268907563, 0.0819327731092437}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[11] <= 47.0) {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.47639484978540775, 0.5236051502145923}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.84, 0.16}, 2 * sizeof(double));
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
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[11] <= 16.0) {
                                                                                        if (input[17] <= 31.5) {
                                                                                            memcpy(var0, (const double[]){0.40229885057471265, 0.5977011494252874}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 32.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.7223382045929019, 0.2776617954070981}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.4756380510440835, 0.5243619489559165}, 2 * sizeof(double));
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
            if (input[20] <= 44.0) {
                if (input[18] <= 0.5) {
                    if (input[17] <= 19.5) {
                        if (input[17] <= 16.5) {
                            if (input[17] <= 15.5) {
                                if (input[19] <= 6.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                if (input[11] <= 8.0) {
                                    memcpy(var0, (const double[]){0.22884012539184953, 0.7711598746081505}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.005291005291005291, 0.9947089947089947}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 8.0) {
                                        memcpy(var0, (const double[]){0.4168564920273349, 0.5831435079726651}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.12487512487512488, 0.8751248751248751}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 20.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 21.5) {
                                memcpy(var0, (const double[]){0.23178807947019867, 0.7682119205298014}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 22.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 23.5) {
                                        memcpy(var0, (const double[]){0.3112807463952502, 0.6887192536047498}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 24.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 25.5) {
                                                memcpy(var0, (const double[]){0.30011587485515645, 0.6998841251448435}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 26.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 53491.5) {
                                                        if (input[17] <= 27.5) {
                                                            memcpy(var0, (const double[]){0.3896457765667575, 0.6103542234332425}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6738461538461539, 0.3261538461538461}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.420479302832244, 0.579520697167756}, 2 * sizeof(double));
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
                    if (input[17] <= 15.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 23.5) {
                            if (input[11] <= 8.0) {
                                if (input[6] <= 2.5) {
                                    memcpy(var0, (const double[]){0.47072784810126583, 0.5292721518987342}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.15009041591320071, 0.8499095840867993}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 19.5) {
                                    memcpy(var0, (const double[]){0.07392197125256673, 0.9260780287474333}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[12] <= 10.0) {
                                            memcpy(var0, (const double[]){0.571992110453649, 0.4280078895463511}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.3182711198428291, 0.6817288801571709}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.1235657546337158, 0.8764342453662842}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[11] <= 12.0) {
                                if (input[17] <= 24.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.5243342516069789, 0.4756657483930211}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 27.5) {
                                    memcpy(var0, (const double[]){0.17675544794188863, 0.8232445520581114}, 2 * sizeof(double));
                                } else {
                                    if (input[12] <= 14.0) {
                                        memcpy(var0, (const double[]){0.49032258064516127, 0.5096774193548387}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2716873212583413, 0.7283126787416587}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[11] <= 8.5) {
                    if (input[17] <= 15.5) {
                        memcpy(var0, (const double[]){0.015384615384615385, 0.9846153846153847}, 2 * sizeof(double));
                    } else {
                        if (input[6] <= 0.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[6] <= 2.5) {
                                if (input[17] <= 16.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[5] <= 960.0) {
                                        if (input[15] <= 1656.0) {
                                            memcpy(var0, (const double[]){0.5551663747810858, 0.4448336252189142}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.07692307692307693, 0.9230769230769231}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 424.0) {
                                            memcpy(var0, (const double[]){0.8391261171797418, 0.1608738828202582}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.13580246913580246, 0.8641975308641975}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[6] <= 0.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[6] <= 2.5) {
                            if (input[14] <= 40.0) {
                                if (input[18] <= 0.5) {
                                    memcpy(var0, (const double[]){0.057455540355677154, 0.9425444596443229}, 2 * sizeof(double));
                                } else {
                                    if (input[5] <= 960.0) {
                                        memcpy(var0, (const double[]){0.1393791844187462, 0.8606208155812538}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.40458015267175573, 0.5954198473282443}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.017421602787456445, 0.9825783972125436}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
