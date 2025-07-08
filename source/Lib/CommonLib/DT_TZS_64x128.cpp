//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_64x128.h"

#include <string.h>
void DT_TZS_64x128::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[11] <= 14.5) {
                memcpy(var0, (const double[]){0.00007013536124720711, 0.9999298646387528}, 2 * sizeof(double));
            } else {
                if (input[21] <= 63390.0) {
                    memcpy(var0, (const double[]){0.00017960845357121476, 0.9998203915464288}, 2 * sizeof(double));
                } else {
                    if (input[17] <= 22.5) {
                        memcpy(var0, (const double[]){0.4380165289256198, 0.5619834710743802}, 2 * sizeof(double));
                    } else {
                        if (input[13] <= -2.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[13] <= 2.0) {
                                memcpy(var0, (const double[]){0.32231404958677684, 0.6776859504132231}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
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
                            memcpy(var0, (const double[]){0.0005583472920156337, 0.9994416527079844}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    if (input[14] <= -338.0) {
                                        if (input[8] <= -348.0) {
                                            memcpy(var0, (const double[]){0.9030303030303031, 0.09696969696969697}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.025540275049115914, 0.9744597249508841}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= -980.0) {
                                            if (input[22] <= -268.5) {
                                                if (input[13] <= -4356.0) {
                                                    memcpy(var0, (const double[]){0.24444444444444444, 0.7555555555555555}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6261843238587425, 0.37381567614125755}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9428571428571428, 0.05714285714285714}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= -120.0) {
                                                if (input[0] <= 29.5) {
                                                    memcpy(var0, (const double[]){0.3492957746478873, 0.6507042253521127}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5465288035450517, 0.4534711964549483}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.14189189189189189, 0.8581081081081081}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[13] <= 2.0) {
                                            if (input[14] <= -2.0) {
                                                if (input[23] <= -7.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.09641873278236915, 0.9035812672176309}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9954778414229726, 0.004522158577027435}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[7] <= 12.0) {
                                                memcpy(var0, (const double[]){0.0171990171990172, 0.9828009828009828}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7411764705882353, 0.25882352941176473}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[8] <= 12.0) {
                                            memcpy(var0, (const double[]){0.029876977152899824, 0.9701230228471002}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9146341463414634, 0.08536585365853659}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[17] <= 14.5) {
                        if (input[17] <= 13.5) {
                            if (input[17] <= 11.5) {
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
                            if (input[12] <= 3.0) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[13] <= -140.0) {
                                        memcpy(var0, (const double[]){0.23349679366276876, 0.7665032063372312}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= 1184.0) {
                                            memcpy(var0, (const double[]){0.05629477993858751, 0.9437052200614124}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.1732283464566929, 0.8267716535433071}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[17] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 7.5) {
                        if (input[6] <= 2.5) {
                            if (input[21] <= 19873.5) {
                                if (input[6] <= 0.5) {
                                    if (input[11] <= 6.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 35.0) {
                                            if (input[18] <= 0.5) {
                                                if (input[17] <= 23.5) {
                                                    if (input[16] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8610827374872319, 0.13891726251276812}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9631901840490797, 0.03680981595092025}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.0) {
                                                    if (input[13] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.5259259259259259, 0.4740740740740741}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9310344827586207, 0.06896551724137931}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.17446808510638298, 0.825531914893617}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 21.5) {
                                                if (input[18] <= 0.5) {
                                                    if (input[20] <= 42.0) {
                                                        memcpy(var0, (const double[]){0.450199203187251, 0.549800796812749}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.061224489795918366, 0.9387755102040817}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.08315565031982942, 0.9168443496801706}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.6597510373443983, 0.34024896265560167}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[9] <= 8.0) {
                                            if (input[14] <= 8.0) {
                                                if (input[16] <= 24.0) {
                                                    if (input[14] <= -8.0) {
                                                        if (input[8] <= -24.0) {
                                                            if (input[14] <= -376.0) {
                                                                memcpy(var0, (const double[]){0.28205128205128205, 0.717948717948718}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6975308641975309, 0.30246913580246915}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 157.5) {
                                                                memcpy(var0, (const double[]){0.5470085470085471, 0.452991452991453}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.3484848484848485, 0.6515151515151515}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.04032258064516129, 0.9596774193548387}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[16] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= -8.0) {
                                                                if (input[12] <= 3.0) {
                                                                    if (input[13] <= -40.0) {
                                                                        memcpy(var0, (const double[]){0.7890295358649789, 0.2109704641350211}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[22] <= 3.0) {
                                                                            memcpy(var0, (const double[]){0.4117647058823529, 0.5882352941176471}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8850574712643678, 0.11494252873563218}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.06719367588932806, 0.932806324110672}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[13] <= 24.0) {
                                                                    if (input[15] <= 8.0) {
                                                                        if (input[13] <= -8.0) {
                                                                            if (input[7] <= -24.0) {
                                                                                memcpy(var0, (const double[]){0.9912087912087912, 0.008791208791208791}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 6.5) {
                                                                                    memcpy(var0, (const double[]){0.7538461538461538, 0.24615384615384617}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.13953488372093023, 0.8604651162790697}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[13] <= 8.0) {
                                                                                memcpy(var0, (const double[]){0.9952380952380953, 0.004761904761904762}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6853932584269663, 0.3146067415730337}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[22] <= 2.5) {
                                                                            memcpy(var0, (const double[]){0.1297709923664122, 0.8702290076335878}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.8241758241758241, 0.17582417582417584}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[21] <= 8376.5) {
                                                                        memcpy(var0, (const double[]){0.7377049180327869, 0.26229508196721313}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.05521472392638037, 0.9447852760736196}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.19794344473007713, 0.8020565552699229}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[21] <= 3638.0) {
                                                    memcpy(var0, (const double[]){0.6394557823129252, 0.36054421768707484}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= 8.0) {
                                                        memcpy(var0, (const double[]){0.16247139588100687, 0.8375286041189931}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4269005847953216, 0.5730994152046783}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[16] <= 8.0) {
                                                if (input[7] <= 8.0) {
                                                    if (input[4] <= 992.0) {
                                                        memcpy(var0, (const double[]){0.9353701527614571, 0.06462984723854288}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6756756756756757, 0.32432432432432434}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6274509803921569, 0.37254901960784315}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.375, 0.625}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[14] <= 24.0) {
                                                if (input[14] <= -24.0) {
                                                    if (input[17] <= 19.5) {
                                                        if (input[21] <= 7744.0) {
                                                            memcpy(var0, (const double[]){0.672514619883041, 0.32748538011695905}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3380281690140845, 0.6619718309859155}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6467532467532467, 0.35324675324675325}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        if (input[20] <= 39.0) {
                                                            memcpy(var0, (const double[]){0.7607655502392344, 0.23923444976076555}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 12546.0) {
                                                                memcpy(var0, (const double[]){0.7354085603112841, 0.26459143968871596}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9152119700748129, 0.08478802992518704}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[21] <= 17893.0) {
                                                            memcpy(var0, (const double[]){0.5666666666666667, 0.43333333333333335}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9008264462809917, 0.09917355371900827}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.3522975929978118, 0.6477024070021882}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6090225563909775, 0.39097744360902253}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[15] <= -2.0) {
                                    if (input[17] <= 17.5) {
                                        if (input[16] <= -376.0) {
                                            memcpy(var0, (const double[]){0.9794344473007712, 0.02056555269922879}, 2 * sizeof(double));
                                        } else {
                                            if (input[7] <= 14.0) {
                                                if (input[15] <= -56.0) {
                                                    if (input[5] <= 832.0) {
                                                        memcpy(var0, (const double[]){0.6570458404074703, 0.34295415959252973}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8551724137931035, 0.14482758620689656}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.25349301397205587, 0.7465069860279441}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5719298245614035, 0.4280701754385965}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.7836166924265843, 0.21638330757341576}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9389671361502347, 0.06103286384976526}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                if (input[13] <= -2160.0) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.669609079445145, 0.33039092055485497}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.7052631578947368, 0.29473684210526313}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9379615952732644, 0.0620384047267356}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[14] <= -2.0) {
                                        if (input[9] <= 88.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[8] <= -14.0) {
                                                    if (input[8] <= -56.0) {
                                                        memcpy(var0, (const double[]){0.9156327543424317, 0.08436724565756824}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.49407114624505927, 0.5059288537549407}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8269230769230769, 0.17307692307692307}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        if (input[12] <= 3.0) {
                                                            memcpy(var0, (const double[]){0.22178988326848248, 0.7782101167315175}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6911764705882353, 0.3088235294117647}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        if (input[16] <= 6.0) {
                                                            memcpy(var0, (const double[]){0.49544072948328266, 0.5045592705167173}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8558558558558559, 0.14414414414414414}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.6870748299319728, 0.3129251700680272}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9383561643835616, 0.06164383561643835}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9820554649265906, 0.01794453507340946}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[23] <= -3.5) {
                                                    memcpy(var0, (const double[]){0.9738903394255874, 0.02610966057441253}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 17.5) {
                                                        if (input[18] <= 0.5) {
                                                            if (input[16] <= -26.0) {
                                                                memcpy(var0, (const double[]){0.6533333333333333, 0.3466666666666667}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[4] <= 864.0) {
                                                                    memcpy(var0, (const double[]){0.3504273504273504, 0.6495726495726496}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[16] <= -14.0) {
                                                                if (input[21] <= 37987.0) {
                                                                    memcpy(var0, (const double[]){0.6176470588235294, 0.38235294117647056}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9743119266055046, 0.025688073394495414}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.39759036144578314, 0.6024096385542169}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[14] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.9635157545605307, 0.03648424543946932}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8229665071770335, 0.17703349282296652}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    if (input[14] <= 10.0) {
                                                        if (input[13] <= -2.0) {
                                                            if (input[7] <= -48.0) {
                                                                memcpy(var0, (const double[]){0.9895833333333334, 0.010416666666666666}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 17.5) {
                                                                    memcpy(var0, (const double[]){0.3862433862433862, 0.6137566137566137}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9251336898395722, 0.0748663101604278}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[13] <= 2.0) {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[20] <= 42.0) {
                                                                        memcpy(var0, (const double[]){0.9889705882352942, 0.011029411764705883}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= 177766.5) {
                                                                            memcpy(var0, (const double[]){0.6746411483253588, 0.3253588516746411}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        if (input[22] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.9934618419569383, 0.0065381580430616615}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9239543726235742, 0.07604562737642585}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9995796258670216, 0.0004203741329783507}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 17.5) {
                                                                    if (input[7] <= 2.0) {
                                                                        memcpy(var0, (const double[]){0.17777777777777778, 0.8222222222222222}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9646017699115044, 0.035398230088495575}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[4] <= 1184.0) {
                                                            if (input[17] <= 17.5) {
                                                                if (input[8] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.22330097087378642, 0.7766990291262136}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.863013698630137, 0.136986301369863}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9017857142857143, 0.09821428571428571}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9911111111111112, 0.008888888888888889}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[9] <= 56.0) {
                                                        memcpy(var0, (const double[]){0.8360160965794768, 0.16398390342052313}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= 56.0) {
                                                            memcpy(var0, (const double[]){0.8171428571428572, 0.18285714285714286}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9884393063583815, 0.011560693641618497}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 17.5) {
                                                if (input[18] <= 0.5) {
                                                    if (input[10] <= 44.0) {
                                                        if (input[16] <= 96.0) {
                                                            memcpy(var0, (const double[]){0.3022113022113022, 0.6977886977886978}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= 1280.0) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[13] <= 560.0) {
                                                            memcpy(var0, (const double[]){0.949685534591195, 0.050314465408805034}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.525, 0.475}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9405940594059405, 0.0594059405940594}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8892988929889298, 0.11070110701107011}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                if (input[11] <= 6.5) {
                                    memcpy(var0, (const double[]){0.4146341463414634, 0.5853658536585366}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= 30.5) {
                                        memcpy(var0, (const double[]){0.1262135922330097, 0.8737864077669902}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.01441899915182358, 0.9855810008481765}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 19.5) {
                                        if (input[20] <= 39.0) {
                                            memcpy(var0, (const double[]){0.3306613226452906, 0.6693386773547094}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.08620689655172414, 0.9137931034482759}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.49683544303797467, 0.5031645569620253}, 2 * sizeof(double));
                                        }
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
                                    if (input[5] <= 960.0) {
                                        memcpy(var0, (const double[]){0.44655581947743467, 0.5534441805225653}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.6583333333333333, 0.3416666666666667}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[12] <= 3.0) {
                                    if (input[11] <= 9.5) {
                                        if (input[22] <= 5.5) {
                                            memcpy(var0, (const double[]){0.06313253012048192, 0.9368674698795181}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 13996.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.13402061855670103, 0.865979381443299}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= -364.0) {
                                                memcpy(var0, (const double[]){0.3469387755102041, 0.6530612244897959}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.1624548736462094, 0.8375451263537906}, 2 * sizeof(double));
                                            }
                                        }
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
                                            if (input[21] <= 8523.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[20] <= 44.0) {
                                                    memcpy(var0, (const double[]){0.3110492107706592, 0.6889507892293407}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[4] <= 1760.0) {
                                                if (input[6] <= 2.5) {
                                                    if (input[12] <= 3.0) {
                                                        if (input[21] <= 43.5) {
                                                            if (input[20] <= 26.0) {
                                                                memcpy(var0, (const double[]){0.264, 0.736}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6070287539936102, 0.3929712460063898}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.31835686777920413, 0.6816431322207959}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 416.0) {
                                                            if (input[14] <= 8.0) {
                                                                if (input[16] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.6982097186700768, 0.30179028132992325}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4155251141552511, 0.5844748858447488}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4245810055865922, 0.5754189944134078}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9777777777777777, 0.022222222222222223}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= -500.0) {
                                                        memcpy(var0, (const double[]){0.6521739130434783, 0.34782608695652173}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 42.0) {
                                                            memcpy(var0, (const double[]){0.2060535506402794, 0.7939464493597206}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 44.0) {
                                                    if (input[22] <= 83.0) {
                                                        if (input[21] <= 89.5) {
                                                            memcpy(var0, (const double[]){0.5716911764705882, 0.42830882352941174}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 60831.5) {
                                                                memcpy(var0, (const double[]){0.9739130434782609, 0.02608695652173913}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6748466257668712, 0.32515337423312884}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.34502923976608185, 0.6549707602339181}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9269406392694064, 0.0730593607305936}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[12] <= 3.0) {
                                            if (input[6] <= 0.5) {
                                                if (input[21] <= 13545.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.12716763005780346, 0.8728323699421965}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[15] <= -280.0) {
                                                    memcpy(var0, (const double[]){0.40646976090014064, 0.5935302390998594}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 11.5) {
                                                        memcpy(var0, (const double[]){0.06356589147286822, 0.9364341085271318}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.20568927789934355, 0.7943107221006565}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 21.5) {
                                            if (input[11] <= 12.5) {
                                                if (input[12] <= 3.0) {
                                                    if (input[20] <= 44.0) {
                                                        if (input[21] <= 42535.5) {
                                                            if (input[6] <= 0.5) {
                                                                if (input[21] <= 12262.5) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3184713375796178, 0.6815286624203821}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 142.5) {
                                                                    memcpy(var0, (const double[]){0.5440180586907449, 0.45598194130925507}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.27141568981064024, 0.7285843101893598}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[14] <= -14.0) {
                                                                memcpy(var0, (const double[]){0.4062927496580027, 0.5937072503419972}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6188565697091274, 0.3811434302908726}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.007407407407407408, 0.9925925925925926}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 2.5) {
                                                        if (input[6] <= 0.5) {
                                                            if (input[0] <= 34.5) {
                                                                memcpy(var0, (const double[]){0.5532646048109966, 0.44673539518900346}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[5] <= 192.0) {
                                                                memcpy(var0, (const double[]){0.6261682242990654, 0.37383177570093457}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8224414303329223, 0.17755856966707767}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2987012987012987, 0.7012987012987013}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 12471.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.12684365781710916, 0.8731563421828908}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[11] <= 13.5) {
                                                        memcpy(var0, (const double[]){0.050119331742243436, 0.9498806682577565}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2650375939849624, 0.7349624060150376}, 2 * sizeof(double));
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
                                                            if (input[21] <= 8291.0) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 44.0) {
                                                                    if (input[11] <= 10.0) {
                                                                        memcpy(var0, (const double[]){0.58311345646438, 0.41688654353562005}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.31873479318734793, 0.681265206812652}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[22] <= -105.0) {
                                                                memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 13.5) {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[4] <= 1312.0) {
                                                                            memcpy(var0, (const double[]){0.34970139349701396, 0.6502986065029861}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.5719298245614035, 0.4280701754385965}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.659919028340081, 0.340080971659919}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6723809523809524, 0.32761904761904764}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.04263565891472868, 0.9573643410852714}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.24093023255813953, 0.7590697674418605}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[11] <= 16.5) {
                                                                if (input[6] <= 0.5) {
                                                                    if (input[21] <= 8368.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[20] <= 44.0) {
                                                                            if (input[16] <= 10.0) {
                                                                                memcpy(var0, (const double[]){0.5177514792899408, 0.4822485207100592}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.27598566308243727, 0.7240143369175627}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[11] <= 15.5) {
                                                                        memcpy(var0, (const double[]){0.4270783847980998, 0.5729216152019002}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6833333333333333, 0.31666666666666665}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.04155124653739612, 0.9584487534626038}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 21.5) {
                                                                        memcpy(var0, (const double[]){0.18451612903225806, 0.8154838709677419}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.48, 0.52}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[7] <= -1946.0) {
                                                                    if (input[17] <= 29.5) {
                                                                        if (input[17] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.46229508196721314, 0.5377049180327869}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.4652777777777778, 0.5347222222222222}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[5] <= 192.0) {
                                                                            if (input[7] <= -4744.0) {
                                                                                if (input[15] <= -1264.0) {
                                                                                    memcpy(var0, (const double[]){0.9310344827586207, 0.06896551724137931}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[8] <= -1580.0) {
                                                                                    memcpy(var0, (const double[]){0.995475113122172, 0.004524886877828055}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.848314606741573, 0.15168539325842698}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[21] <= 18.5) {
                                                                                if (input[4] <= 288.0) {
                                                                                    if (input[20] <= 32.0) {
                                                                                        memcpy(var0, (const double[]){0.9820317899101589, 0.01796821008984105}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.850415512465374, 0.14958448753462603}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[0] <= 24.5) {
                                                                                        if (input[8] <= 1196.0) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.9262536873156342, 0.07374631268436578}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.826865671641791, 0.17313432835820897}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.9798165137614679, 0.02018348623853211}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[4] <= 1184.0) {
                                                                                            if (input[14] <= 3680.0) {
                                                                                                memcpy(var0, (const double[]){0.8943831012962074, 0.10561689870379261}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6416666666666667, 0.35833333333333334}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[14] <= -2998.0) {
                                                                                                memcpy(var0, (const double[]){0.5549132947976878, 0.44508670520231214}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.7832957110609481, 0.21670428893905191}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.603448275862069, 0.39655172413793105}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 27.5) {
                                                                        if (input[11] <= 18.5) {
                                                                            if (input[21] <= -0.5) {
                                                                                memcpy(var0, (const double[]){0.6585365853658537, 0.34146341463414637}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 9.5) {
                                                                                    if (input[21] <= 22873.0) {
                                                                                        memcpy(var0, (const double[]){0.42574257425742573, 0.5742574257425742}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.8676470588235294, 0.1323529411764706}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.4015873015873016, 0.5984126984126984}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.024193548387096774, 0.9758064516129032}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.23119777158774374, 0.7688022284122563}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 28.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 29.5) {
                                                                                if (input[11] <= 20.5) {
                                                                                    if (input[6] <= 0.5) {
                                                                                        if (input[21] <= 9059.0) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[11] <= 12.0) {
                                                                                                memcpy(var0, (const double[]){0.7419354838709677, 0.25806451612903225}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.38425925925925924, 0.6157407407407407}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[11] <= 18.5) {
                                                                                            memcpy(var0, (const double[]){0.4543859649122807, 0.5456140350877193}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6762749445676275, 0.3237250554323725}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.15838150289017341, 0.8416184971098266}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 30.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= 29865.5) {
                                                                                        if (input[17] <= 31.5) {
                                                                                            if (input[11] <= 23.5) {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    if (input[21] <= 9275.0) {
                                                                                                        memcpy(var0, (const double[]){0.008695652173913044, 0.991304347826087}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.5418994413407822, 0.4581005586592179}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[21] <= 9418.5) {
                                                                                                        memcpy(var0, (const double[]){0.6884422110552764, 0.31155778894472363}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.2786885245901639, 0.7213114754098361}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[11] <= 25.5) {
                                                                                                        memcpy(var0, (const double[]){0.1734475374732334, 0.8265524625267666}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.4827586206896552, 0.5172413793103449}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[17] <= 32.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 33.5) {
                                                                                                    if (input[11] <= 24.5) {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            if (input[21] <= 9554.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 21.5) {
                                                                                                                memcpy(var0, (const double[]){0.4392523364485981, 0.5607476635514018}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.7838765008576329, 0.21612349914236706}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.019867549668874173, 0.9801324503311258}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 27.0) {
                                                                                                                memcpy(var0, (const double[]){0.16080402010050251, 0.8391959798994975}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.4788732394366197, 0.5211267605633803}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 34.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 35.5) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[21] <= 4371.0) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.4918032786885246, 0.5081967213114754}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 27.0) {
                                                                                                                    if (input[11] <= 25.0) {
                                                                                                                        memcpy(var0, (const double[]){0.4713656387665198, 0.5286343612334802}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.8112244897959183, 0.18877551020408162}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.26597938144329897, 0.734020618556701}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[17] <= 36.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 37.5) {
                                                                                                                    if (input[11] <= 28.5) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            if (input[21] <= 8866.5) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.6065573770491803, 0.39344262295081966}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 27.0) {
                                                                                                                                memcpy(var0, (const double[]){0.5272727272727272, 0.4727272727272727}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.8511904761904762, 0.1488095238095238}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.12810707456978968, 0.8718929254302104}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 38.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 39.5) {
                                                                                                                            if (input[11] <= 31.0) {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    if (input[11] <= 19.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.5076923076923077, 0.49230769230769234}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 21.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.2972972972972973, 0.7027027027027027}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.8516746411483254, 0.14832535885167464}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.1937984496124031, 0.8062015503875969}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[17] <= 40.5) {
                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 41.5) {
                                                                                                                                    if (input[11] <= 32.5) {
                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.23076923076923078, 0.7692307692307693}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[11] <= 29.5) {
                                                                                                                                                memcpy(var0, (const double[]){0.4095238095238095, 0.5904761904761905}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.8935574229691877, 0.10644257703081232}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.006134969325153374, 0.9938650306748467}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.24414715719063546, 0.7558528428093646}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 42.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 43.5) {
                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                if (input[11] <= 30.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.2903225806451613, 0.7096774193548387}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[11] <= 35.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.8666666666666667, 0.13333333333333333}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.3170731707317073, 0.6829268292682927}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 44.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 45.5) {
                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.053763440860215055, 0.946236559139785}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[11] <= 37.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.8516129032258064, 0.14838709677419354}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.20588235294117646, 0.7941176470588235}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 46.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 47.5) {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.03862660944206009, 0.9613733905579399}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[11] <= 39.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.8683127572016461, 0.13168724279835392}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.22935779816513763, 0.7706422018348624}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 48.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 49.5) {
                                                                                                                                                                    if (input[11] <= 41.0) {
                                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.22388059701492538, 0.7761194029850746}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.8505747126436781, 0.14942528735632185}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.04395604395604396, 0.9560439560439561}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 50.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 51.5) {
                                                                                                                                                                            if (input[11] <= 43.0) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.7894736842105263, 0.21052631578947367}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.010101010101010102, 0.98989898989899}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[17] <= 52.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[17] <= 66.0) {
                                                                                                                                                                                    if (input[17] <= 53.5) {
                                                                                                                                                                                        memcpy(var0, (const double[]){0.5294117647058824, 0.47058823529411764}, 2 * sizeof(double));
                                                                                                                                                                                    } else {
                                                                                                                                                                                        if (input[17] <= 54.5) {
                                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                        } else {
                                                                                                                                                                                            if (input[17] <= 55.5) {
                                                                                                                                                                                                memcpy(var0, (const double[]){0.41818181818181815, 0.5818181818181818}, 2 * sizeof(double));
                                                                                                                                                                                            } else {
                                                                                                                                                                                                if (input[17] <= 56.5) {
                                                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                                } else {
                                                                                                                                                                                                    memcpy(var0, (const double[]){0.7464788732394366, 0.2535211267605634}, 2 * sizeof(double));
                                                                                                                                                                                                }
                                                                                                                                                                                            }
                                                                                                                                                                                        }
                                                                                                                                                                                    }
                                                                                                                                                                                } else {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.2903225806451613, 0.7096774193548387}, 2 * sizeof(double));
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
                                                                                        if (input[11] <= 14.0) {
                                                                                            if (input[16] <= -424.0) {
                                                                                                memcpy(var0, (const double[]){0.390625, 0.609375}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[17] <= 31.5) {
                                                                                                    memcpy(var0, (const double[]){0.5963302752293578, 0.4036697247706422}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[5] <= 704.0) {
                                                                                                        memcpy(var0, (const double[]){0.9126365054602185, 0.0873634945397816}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.7247191011235955, 0.2752808988764045}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 2.5) {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    if (input[20] <= 33.0) {
                                                                                                        if (input[17] <= 40.5) {
                                                                                                            memcpy(var0, (const double[]){0.4303030303030303, 0.5696969696969697}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.0880503144654088, 0.9119496855345912}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[13] <= -2212.0) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 38.5) {
                                                                                                                if (input[17] <= 31.5) {
                                                                                                                    memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 32.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[14] <= -54.0) {
                                                                                                                            if (input[16] <= 24.0) {
                                                                                                                                memcpy(var0, (const double[]){0.9661016949152542, 0.03389830508474576}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.6241610738255033, 0.37583892617449666}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[21] <= 76178.5) {
                                                                                                                                memcpy(var0, (const double[]){0.638095238095238, 0.3619047619047619}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.2689655172413793, 0.7310344827586207}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[17] <= 59.5) {
                                                                                                                    if (input[4] <= 2400.0) {
                                                                                                                        if (input[8] <= -412.0) {
                                                                                                                            memcpy(var0, (const double[]){0.09316770186335403, 0.906832298136646}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.3426724137931034, 0.6573275862068966}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.6451612903225806, 0.3548387096774194}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.5754385964912281, 0.4245614035087719}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 31.5) {
                                                                                                        memcpy(var0, (const double[]){0.3816793893129771, 0.6183206106870229}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 32.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 47.5) {
                                                                                                                if (input[6] <= 1.5) {
                                                                                                                    memcpy(var0, (const double[]){0.5086782376502003, 0.49132176234979974}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.670299727520436, 0.329700272479564}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.6997840172786177, 0.3002159827213823}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[4] <= 1248.0) {
                                                                                                    if (input[22] <= 39.0) {
                                                                                                        if (input[23] <= -2.5) {
                                                                                                            memcpy(var0, (const double[]){0.02756892230576441, 0.9724310776942355}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.2276657060518732, 0.7723342939481268}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.48771929824561405, 0.512280701754386}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[21] <= 169191.0) {
                                                                                                        memcpy(var0, (const double[]){0.3072916666666667, 0.6927083333333334}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6166281755196305, 0.3833718244803695}, 2 * sizeof(double));
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
            if (input[11] <= 8.5) {
                if (input[17] <= 15.5) {
                    if (input[19] <= 6.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[5] <= 960.0) {
                            if (input[6] <= 2.5) {
                                if (input[17] <= 19.5) {
                                    if (input[6] <= 0.5) {
                                        if (input[0] <= 34.5) {
                                            if (input[0] <= 24.5) {
                                                memcpy(var0, (const double[]){0.4859437751004016, 0.5140562248995983}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.14389799635701275, 0.8561020036429873}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 17786.0) {
                                                            memcpy(var0, (const double[]){0.07142857142857142, 0.9285714285714286}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3216374269005848, 0.6783625730994152}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= -8.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[18] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.1639871382636656, 0.8360128617363344}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 47273.5) {
                                                        memcpy(var0, (const double[]){0.3051643192488263, 0.6948356807511737}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3867595818815331, 0.6132404181184669}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[16] <= 8.0) {
                                                if (input[17] <= 18.5) {
                                                    if (input[17] <= 17.5) {
                                                        if (input[15] <= -8.0) {
                                                            if (input[21] <= 33864.5) {
                                                                memcpy(var0, (const double[]){0.18614718614718614, 0.8138528138528138}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5324675324675324, 0.4675324675324675}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[15] <= 8.0) {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.7313915857605178, 0.2686084142394822}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9539823008849557, 0.04601769911504425}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[7] <= -8.0) {
                                                                    memcpy(var0, (const double[]){0.6893203883495146, 0.3106796116504854}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[7] <= 24.0) {
                                                                        memcpy(var0, (const double[]){0.20622568093385213, 0.7937743190661478}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6326530612244898, 0.3673469387755102}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.6711409395973155, 0.3288590604026846}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3861788617886179, 0.6138211382113821}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[13] <= -520.0) {
                                                    memcpy(var0, (const double[]){0.8566037735849057, 0.14339622641509434}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 17.5) {
                                                        if (input[18] <= 0.5) {
                                                            if (input[12] <= 10.0) {
                                                                if (input[10] <= 40.0) {
                                                                    memcpy(var0, (const double[]){0.18974358974358974, 0.8102564102564103}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.03151862464183381, 0.9684813753581661}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.36486486486486486, 0.6351351351351351}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 33376.0) {
                                                                memcpy(var0, (const double[]){0.28125, 0.71875}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.628099173553719, 0.371900826446281}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3882063882063882, 0.6117936117936118}, 2 * sizeof(double));
                                                        }
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
                                            if (input[12] <= 12.0) {
                                                memcpy(var0, (const double[]){0.48872180451127817, 0.5112781954887218}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.23706896551724138, 0.7629310344827587}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    memcpy(var0, (const double[]){0.43478260869565216, 0.5652173913043478}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6269938650306749, 0.37300613496932516}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 17.5) {
                                    memcpy(var0, (const double[]){0.04091653027823241, 0.9590834697217676}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 40.5) {
                                            if (input[17] <= 19.5) {
                                                memcpy(var0, (const double[]){0.20095693779904306, 0.7990430622009569}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.42276422764227645, 0.5772357723577236}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.07434052757793765, 0.9256594724220624}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[13] <= 480.0) {
                                if (input[5] <= 1600.0) {
                                    memcpy(var0, (const double[]){0.8227320125130344, 0.1772679874869656}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.945631067961165, 0.05436893203883495}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.39473684210526316, 0.6052631578947368}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[20] <= 44.0) {
                    if (input[17] <= 19.5) {
                        if (input[18] <= 0.5) {
                            if (input[17] <= 18.5) {
                                if (input[17] <= 17.5) {
                                    if (input[17] <= 16.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[6] <= 1.5) {
                                    memcpy(var0, (const double[]){0.20945945945945946, 0.7905405405405406}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.06739130434782609, 0.9326086956521739}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[11] <= 10.0) {
                                    if (input[16] <= 2.0) {
                                        memcpy(var0, (const double[]){0.12222222222222222, 0.8777777777777778}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.047619047619047616, 0.9523809523809523}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.005893909626719057, 0.9941060903732809}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 20.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[18] <= 0.5) {
                                if (input[17] <= 21.5) {
                                    if (input[11] <= 10.0) {
                                        if (input[0] <= 24.5) {
                                            memcpy(var0, (const double[]){0.4241486068111455, 0.5758513931888545}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.1677175283732661, 0.832282471626734}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.06712962962962964, 0.9328703703703703}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 22.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            if (input[11] <= 12.0) {
                                                if (input[12] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.5238095238095238, 0.47619047619047616}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2334047109207709, 0.7665952890792291}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.07857142857142857, 0.9214285714285714}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 25.5) {
                                                    if (input[11] <= 12.0) {
                                                        if (input[12] <= 12.0) {
                                                            memcpy(var0, (const double[]){0.5138121546961326, 0.4861878453038674}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.23030303030303031, 0.7696969696969697}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.15056179775280898, 0.849438202247191}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 27.5) {
                                                            memcpy(var0, (const double[]){0.2903225806451613, 0.7096774193548387}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[21] <= 30391.0) {
                                                                    if (input[17] <= 29.5) {
                                                                        memcpy(var0, (const double[]){0.42045454545454547, 0.5795454545454546}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 30.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 31.5) {
                                                                                memcpy(var0, (const double[]){0.4426229508196721, 0.5573770491803278}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 32.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 33.5) {
                                                                                        memcpy(var0, (const double[]){0.38235294117647056, 0.6176470588235294}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 34.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[7] <= 92.0) {
                                                                                                memcpy(var0, (const double[]){0.7539267015706806, 0.24607329842931938}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.31645569620253167, 0.6835443037974683}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.38839285714285715, 0.6116071428571429}, 2 * sizeof(double));
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
                                if (input[20] <= 31.5) {
                                    if (input[11] <= 10.0) {
                                        memcpy(var0, (const double[]){0.5043478260869565, 0.4956521739130435}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.19813519813519814, 0.8018648018648019}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 12.0) {
                                                memcpy(var0, (const double[]){0.5636856368563685, 0.4363143631436314}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 27.5) {
                                                    memcpy(var0, (const double[]){0.2399232245681382, 0.7600767754318618}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 14.0) {
                                                        memcpy(var0, (const double[]){0.6435045317220544, 0.3564954682779456}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.33964817320703655, 0.6603518267929634}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[6] <= 2.5) {
                                        if (input[11] <= 10.0) {
                                            if (input[21] <= 24035.5) {
                                                memcpy(var0, (const double[]){0.29472595656670114, 0.7052740434332989}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.7494199535962877, 0.2505800464037123}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.25862068965517243, 0.7413793103448276}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5775401069518716, 0.42245989304812837}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 23.5) {
                                                if (input[12] <= 10.0) {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.08148148148148149, 0.9185185185185185}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3864306784660767, 0.6135693215339233}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.07643312101910828, 0.9235668789808917}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[11] <= 12.0) {
                                                    if (input[12] <= 12.0) {
                                                        if (input[21] <= 20620.0) {
                                                            memcpy(var0, (const double[]){0.4303030303030303, 0.5696969696969697}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8074866310160428, 0.1925133689839572}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3492063492063492, 0.6507936507936508}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 27.5) {
                                                        if (input[12] <= 12.0) {
                                                            memcpy(var0, (const double[]){0.2204724409448819, 0.7795275590551181}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.07424960505529225, 0.9257503949447078}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.4517766497461929, 0.5482233502538071}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.23695976154992549, 0.7630402384500745}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[9] <= 12.0) {
                                            memcpy(var0, (const double[]){0.16857360793287568, 0.8314263920671243}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= -380.0) {
                                                memcpy(var0, (const double[]){0.40625, 0.59375}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.046357615894039736, 0.9536423841059603}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[6] <= 0.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[6] <= 2.5) {
                            if (input[14] <= 40.0) {
                                if (input[13] <= 24.0) {
                                    if (input[18] <= 0.5) {
                                        if (input[8] <= -8.0) {
                                            memcpy(var0, (const double[]){0.034210526315789476, 0.9657894736842105}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.15508021390374332, 0.8449197860962567}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[22] <= 22.5) {
                                            if (input[21] <= 62655.5) {
                                                if (input[4] <= 1248.0) {
                                                    memcpy(var0, (const double[]){0.19754977029096477, 0.8024502297090352}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5604395604395604, 0.43956043956043955}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0718954248366013, 0.9281045751633987}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.38109756097560976, 0.6189024390243902}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.03691275167785235, 0.9630872483221476}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.019290123456790122, 0.9807098765432098}, 2 * sizeof(double));
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
