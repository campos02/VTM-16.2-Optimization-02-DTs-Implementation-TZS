//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_64x16.h"

#include <string.h>
void DT_TZS_64x16::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[6] <= 0.5) {
                if (input[21] <= 2770.5) {
                    if (input[21] <= 1442.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[11] <= 8.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[13] <= -2.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= 2.0) {
                                    if (input[7] <= 6.0) {
                                        memcpy(var0, (const double[]){0.022058823529411766, 0.9779411764705882}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.3548387096774194, 0.6451612903225806}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[17] <= 23.5) {
                        if (input[20] <= 35.0) {
                            if (input[16] <= -2.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[16] <= 2.0) {
                                    if (input[11] <= 8.0) {
                                        if (input[17] <= 16.0) {
                                            if (input[5] <= 88.0) {
                                                memcpy(var0, (const double[]){0.12, 0.88}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.2619047619047619, 0.7380952380952381}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 5136.0) {
                                            memcpy(var0, (const double[]){0.2171945701357466, 0.7828054298642534}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8611111111111112, 0.1388888888888889}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= 15.5) {
                                memcpy(var0, (const double[]){0.00021048200378867606, 0.9997895179962113}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= -2.0) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[14] <= 2.0) {
                                        if (input[8] <= -18.0) {
                                            memcpy(var0, (const double[]){0.4583333333333333, 0.5416666666666666}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 8352.0) {
                                                memcpy(var0, (const double[]){0.007308160779537149, 0.9926918392204629}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 44.0) {
                                                        memcpy(var0, (const double[]){0.2376237623762376, 0.7623762376237624}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
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
                        if (input[13] <= -2.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[13] <= 2.0) {
                                if (input[16] <= 2.0) {
                                    if (input[16] <= -2.0) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= -2.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 8.0) {
                                                memcpy(var0, (const double[]){0.46511627906976744, 0.5348837209302325}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9812108559498957, 0.018789144050104383}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[11] <= 7.5) {
            if (input[17] <= 15.5) {
                if (input[11] <= 6.5) {
                    if (input[13] <= -2.0) {
                        if (input[17] <= 13.5) {
                            if (input[17] <= 12.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[20] <= 32.0) {
                                    if (input[16] <= -464.0) {
                                        memcpy(var0, (const double[]){0.9379310344827586, 0.06206896551724138}, 2 * sizeof(double));
                                    } else {
                                        if (input[14] <= -376.0) {
                                            if (input[8] <= -352.0) {
                                                memcpy(var0, (const double[]){0.7307692307692307, 0.2692307692307692}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.03481624758220503, 0.965183752417795}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[22] <= -60.5) {
                                                if (input[8] <= -312.0) {
                                                    if (input[13] <= -4392.0) {
                                                        memcpy(var0, (const double[]){0.10810810810810811, 0.8918918918918919}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= -312.0) {
                                                            memcpy(var0, (const double[]){0.6641221374045801, 0.33587786259541985}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[7] <= -1000.0) {
                                                        memcpy(var0, (const double[]){0.9762532981530343, 0.023746701846965697}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5581395348837209, 0.4418604651162791}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[7] <= -6.0) {
                                                    if (input[5] <= 1432.0) {
                                                        if (input[4] <= 1248.0) {
                                                            if (input[13] <= -184.0) {
                                                                memcpy(var0, (const double[]){0.6638655462184874, 0.33613445378151263}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.37554585152838427, 0.6244541484716157}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[4] <= 2720.0) {
                                                                if (input[14] <= 126.0) {
                                                                    if (input[8] <= 104.0) {
                                                                        memcpy(var0, (const double[]){0.24130879345603273, 0.7586912065439673}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.37, 0.63}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[2] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4924318869828456, 0.5075681130171544}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9714285714285714, 0.02857142857142857}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.12727272727272726, 0.8727272727272727}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[5] <= 952.0) {
                                        if (input[21] <= 1387460224.0) {
                                            if (input[7] <= -56.0) {
                                                if (input[14] <= -360.0) {
                                                    memcpy(var0, (const double[]){0.4426877470355731, 0.5573122529644269}, 2 * sizeof(double));
                                                } else {
                                                    if (input[7] <= -984.0) {
                                                        memcpy(var0, (const double[]){0.8701854493580599, 0.12981455064194009}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 755.5) {
                                                            if (input[21] <= -228347812.0) {
                                                                memcpy(var0, (const double[]){0.768595041322314, 0.23140495867768596}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.44333333333333336, 0.5566666666666666}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 5813.5) {
                                                                if (input[16] <= 36.0) {
                                                                    memcpy(var0, (const double[]){0.8200836820083682, 0.1799163179916318}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9950738916256158, 0.0049261083743842365}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 58992426.0) {
                                                                    memcpy(var0, (const double[]){0.5581395348837209, 0.4418604651162791}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8175675675675675, 0.18243243243243243}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.2028985507246377, 0.7971014492753623}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 1.5) {
                                            memcpy(var0, (const double[]){0.9805068226120858, 0.01949317738791423}, 2 * sizeof(double));
                                        } else {
                                            if (input[14] <= -352.0) {
                                                memcpy(var0, (const double[]){0.5826086956521739, 0.41739130434782606}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 1989.0) {
                                                    memcpy(var0, (const double[]){0.6103896103896104, 0.38961038961038963}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 11698.0) {
                                                        memcpy(var0, (const double[]){0.9833887043189369, 0.016611295681063124}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.860655737704918, 0.13934426229508196}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 2.0) {
                            if (input[14] <= -2.0) {
                                if (input[8] <= -2.0) {
                                    if (input[23] <= -7.5) {
                                        if (input[17] <= 13.5) {
                                            memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9911894273127754, 0.00881057268722467}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 12.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 13.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[8] <= -28.0) {
                                                    memcpy(var0, (const double[]){0.8270676691729323, 0.17293233082706766}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3668639053254438, 0.6331360946745562}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 14.5) {
                                        memcpy(var0, (const double[]){0.6578947368421053, 0.34210526315789475}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.08259587020648967, 0.9174041297935103}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[16] <= -6.0) {
                                        memcpy(var0, (const double[]){0.6457399103139013, 0.3542600896860987}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= -6.0) {
                                            memcpy(var0, (const double[]){0.6451612903225806, 0.3548387096774194}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= 2.0) {
                                                if (input[16] <= 2.0) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.684931506849315, 0.3150684931506849}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5833333333333334, 0.4166666666666667}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[8] <= 2.0) {
                                        if (input[14] <= 12.0) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 14.5) {
                                                memcpy(var0, (const double[]){0.4772727272727273, 0.5227272727272727}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.11895910780669144, 0.8810408921933085}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 12.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 13.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9539473684210527, 0.046052631578947366}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[7] <= 2.0) {
                                if (input[17] <= 14.5) {
                                    memcpy(var0, (const double[]){0.41228070175438597, 0.5877192982456141}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.07760141093474426, 0.9223985890652557}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 12.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 13.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 14.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= 1184.0) {
                                                if (input[21] <= 2988.5) {
                                                    if (input[21] <= -310.5) {
                                                        memcpy(var0, (const double[]){0.8518518518518519, 0.14814814814814814}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3891402714932127, 0.6108597285067874}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7485029940119761, 0.25149700598802394}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[23] <= 29.5) {
                                                    if (input[20] <= 26.0) {
                                                        memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= -51.0) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8097560975609757, 0.1902439024390244}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9950738916256158, 0.0049261083743842365}, 2 * sizeof(double));
                                                }
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
                        if (input[6] <= 0.5) {
                            if (input[21] <= 800.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[12] <= 8.0) {
                                        if (input[21] <= 2146.0) {
                                            memcpy(var0, (const double[]){0.17, 0.83}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 17.5) {
                                                if (input[21] <= 31644.0) {
                                                    if (input[0] <= 24.5) {
                                                        memcpy(var0, (const double[]){0.6136363636363636, 0.38636363636363635}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[5] <= 1016.0) {
                                                            memcpy(var0, (const double[]){0.26621160409556316, 0.7337883959044369}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8163265306122449, 0.1836734693877551}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5644444444444444, 0.43555555555555553}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[20] <= 35.0) {
                                            if (input[21] <= 3848.5) {
                                                memcpy(var0, (const double[]){0.16842105263157894, 0.8315789473684211}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.48140900195694714, 0.5185909980430529}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.05922551252847381, 0.9407744874715261}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[12] <= 10.0) {
                                        if (input[18] <= 0.5) {
                                            if (input[21] <= 2436.0) {
                                                memcpy(var0, (const double[]){0.7089552238805971, 0.291044776119403}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9384908053265695, 0.061509194673430564}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 31.5) {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.34355828220858897, 0.656441717791411}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6190476190476191, 0.38095238095238093}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 7733.0) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8217054263565892, 0.17829457364341086}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 34.5) {
                                            if (input[17] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= 0.5) {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.410958904109589, 0.589041095890411}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7446808510638298, 0.2553191489361702}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.33136094674556216, 0.6686390532544378}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[12] <= 8.5) {
                                if (input[20] <= 33.0) {
                                    if (input[16] <= 8.0) {
                                        if (input[16] <= -8.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[16] <= -376.0) {
                                                    if (input[20] <= 30.5) {
                                                        memcpy(var0, (const double[]){0.5471698113207547, 0.4528301886792453}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= -432.0) {
                                                            memcpy(var0, (const double[]){0.8414634146341463, 0.15853658536585366}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[14] <= -344.0) {
                                                        memcpy(var0, (const double[]){0.10256410256410256, 0.8974358974358975}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[3] <= 1.5) {
                                                            memcpy(var0, (const double[]){0.15217391304347827, 0.8478260869565217}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[2] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.3786008230452675, 0.6213991769547325}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6206896551724138, 0.3793103448275862}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= 640.0) {
                                                        if (input[1] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.3611111111111111, 0.6388888888888888}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7702407002188184, 0.22975929978118162}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.18518518518518517, 0.8148148148148148}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[21] <= 897.5) {
                                                if (input[21] <= -529.0) {
                                                    memcpy(var0, (const double[]){0.9455909943714822, 0.054409005628517824}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 17.5) {
                                                        if (input[13] <= -24.0) {
                                                            memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6614173228346457, 0.33858267716535434}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= -96.0) {
                                                                memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7440476190476191, 0.25595238095238093}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[14] <= -8.0) {
                                                    if (input[17] <= 17.5) {
                                                        if (input[8] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.7744360902255639, 0.22556390977443608}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.40955631399317405, 0.590443686006826}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 18.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[23] <= -0.5) {
                                                                memcpy(var0, (const double[]){0.6486486486486487, 0.35135135135135137}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9411764705882353, 0.058823529411764705}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= -8.0) {
                                                        if (input[17] <= 17.5) {
                                                            if (input[7] <= -24.0) {
                                                                if (input[21] <= 2408.5) {
                                                                    memcpy(var0, (const double[]){0.9414225941422594, 0.058577405857740586}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[14] <= 8.0) {
                                                                        memcpy(var0, (const double[]){0.7610619469026548, 0.23893805309734514}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.24719101123595505, 0.7528089887640449}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[7] <= 40.0) {
                                                                    if (input[18] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.2783882783882784, 0.7216117216117216}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6721311475409836, 0.32786885245901637}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9565217391304348, 0.043478260869565216}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 18.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[21] <= 2441.5) {
                                                                    memcpy(var0, (const double[]){0.9693593314763231, 0.03064066852367688}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.817258883248731, 0.18274111675126903}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[14] <= 8.0) {
                                                            if (input[15] <= 8.0) {
                                                                if (input[13] <= 8.0) {
                                                                    if (input[18] <= 0.5) {
                                                                        if (input[13] <= -8.0) {
                                                                            if (input[7] <= -40.0) {
                                                                                memcpy(var0, (const double[]){0.996996996996997, 0.003003003003003003}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8251748251748252, 0.17482517482517482}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9993997599039616, 0.0006002400960384153}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[21] <= 1806.5) {
                                                                            memcpy(var0, (const double[]){0.7301587301587301, 0.2698412698412698}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9617428267800212, 0.03825717321997875}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.828125, 0.171875}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[22] <= 2.5) {
                                                                    if (input[12] <= 3.0) {
                                                                        memcpy(var0, (const double[]){0.6798029556650246, 0.32019704433497537}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9130434782608695, 0.08695652173913043}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.962671905697446, 0.03732809430255403}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.875784190715182, 0.12421580928481807}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[10] <= 8.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[18] <= 0.5) {
                                                    if (input[20] <= 30.5) {
                                                        if (input[21] <= -109.0) {
                                                            memcpy(var0, (const double[]){0.7692307692307693, 0.23076923076923078}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.30886075949367087, 0.6911392405063291}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5613079019073569, 0.43869209809264303}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7540106951871658, 0.24598930481283424}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 1054.5) {
                                                        if (input[22] <= -34.5) {
                                                            memcpy(var0, (const double[]){0.7475728155339806, 0.2524271844660194}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3103448275862069, 0.6896551724137931}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[3] <= 1.5) {
                                                            memcpy(var0, (const double[]){0.2553191489361702, 0.7446808510638298}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7334525939177102, 0.26654740608228983}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8762541806020067, 0.12374581939799331}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[13] <= 8.0) {
                                        if (input[22] <= -0.5) {
                                            if (input[17] <= 17.5) {
                                                if (input[12] <= 3.0) {
                                                    if (input[14] <= -8.0) {
                                                        if (input[8] <= -24.0) {
                                                            if (input[14] <= -376.0) {
                                                                memcpy(var0, (const double[]){0.5700483091787439, 0.42995169082125606}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8268839103869654, 0.17311608961303462}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 0.5) {
                                                                if (input[21] <= 5723.0) {
                                                                    memcpy(var0, (const double[]){0.6511627906976745, 0.3488372093023256}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.25680933852140075, 0.7431906614785992}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[14] <= 8.0) {
                                                            if (input[16] <= 40.0) {
                                                                if (input[16] <= -8.0) {
                                                                    memcpy(var0, (const double[]){0.5039370078740157, 0.49606299212598426}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[21] <= 258.5) {
                                                                        memcpy(var0, (const double[]){0.5783132530120482, 0.42168674698795183}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= 2693.5) {
                                                                            memcpy(var0, (const double[]){0.9838420107719928, 0.01615798922800718}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[13] <= -8.0) {
                                                                                if (input[7] <= -40.0) {
                                                                                    if (input[22] <= -16.5) {
                                                                                        memcpy(var0, (const double[]){0.7159090909090909, 0.2840909090909091}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.944337811900192, 0.05566218809980806}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6125461254612546, 0.3874538745387454}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[15] <= -8.0) {
                                                                                    memcpy(var0, (const double[]){0.5691056910569106, 0.43089430894308944}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.9903448275862069, 0.009655172413793104}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= 8.0) {
                                                                if (input[7] <= -88.0) {
                                                                    memcpy(var0, (const double[]){0.6347305389221557, 0.3652694610778443}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2261904761904762, 0.7738095238095238}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.740506329113924, 0.25949367088607594}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9448529411764706, 0.05514705882352941}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        if (input[13] <= -8.0) {
                                                            memcpy(var0, (const double[]){0.6537396121883656, 0.3462603878116344}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8796296296296297, 0.12037037037037036}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.7414330218068536, 0.2585669781931464}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8790637191157347, 0.12093628088426528}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[14] <= -8.0) {
                                                if (input[17] <= 17.5) {
                                                    if (input[13] <= -24.0) {
                                                        memcpy(var0, (const double[]){0.960539979231568, 0.03946002076843198}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[8] <= -8.0) {
                                                            if (input[21] <= 8539.5) {
                                                                memcpy(var0, (const double[]){0.9495412844036697, 0.05045871559633028}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7522388059701492, 0.24776119402985075}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[6] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.7177914110429447, 0.2822085889570552}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.28846153846153844, 0.7115384615384616}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 19.5) {
                                                            memcpy(var0, (const double[]){0.8298279158699808, 0.1701720841300191}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 20.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8947368421052632, 0.10526315789473684}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[16] <= -8.0) {
                                                    if (input[18] <= 0.5) {
                                                        if (input[21] <= 2538.0) {
                                                            memcpy(var0, (const double[]){0.9473684210526315, 0.05263157894736842}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[14] <= 8.0) {
                                                                if (input[17] <= 17.5) {
                                                                    memcpy(var0, (const double[]){0.5724381625441696, 0.4275618374558304}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[15] <= 8.0) {
                                                                        if (input[15] <= -8.0) {
                                                                            memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9750692520775623, 0.024930747922437674}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.56, 0.44}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9050279329608939, 0.09497206703910614}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[5] <= 392.0) {
                                                            memcpy(var0, (const double[]){0.8558758314855875, 0.14412416851441243}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9793650793650793, 0.020634920634920634}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[16] <= 8.0) {
                                                        if (input[14] <= 8.0) {
                                                            if (input[15] <= 8.0) {
                                                                if (input[15] <= -8.0) {
                                                                    if (input[7] <= -8.0) {
                                                                        memcpy(var0, (const double[]){0.9947368421052631, 0.005263157894736842}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8396946564885496, 0.16030534351145037}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        memcpy(var0, (const double[]){0.9904375543320777, 0.009562445667922342}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[13] <= -32.0) {
                                                                            memcpy(var0, (const double[]){0.9675425038639877, 0.03245749613601236}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9998859489051095, 0.00011405109489051095}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[7] <= -8.0) {
                                                                    memcpy(var0, (const double[]){0.986351228389445, 0.01364877161055505}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[5] <= 472.0) {
                                                                        if (input[17] <= 17.5) {
                                                                            memcpy(var0, (const double[]){0.6600985221674877, 0.3399014778325123}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9838709677419355, 0.016129032258064516}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9672619047619048, 0.03273809523809524}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[5] <= 596.0) {
                                                                if (input[17] <= 17.5) {
                                                                    if (input[8] <= 8.0) {
                                                                        memcpy(var0, (const double[]){0.5064377682403434, 0.49356223175965663}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9641434262948207, 0.035856573705179286}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9346534653465347, 0.06534653465346535}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9642857142857143, 0.03571428571428571}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[5] <= 668.0) {
                                                            if (input[17] <= 17.5) {
                                                                if (input[4] <= 2368.0) {
                                                                    if (input[18] <= 0.5) {
                                                                        if (input[21] <= 8576.5) {
                                                                            memcpy(var0, (const double[]){0.8546511627906976, 0.14534883720930233}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.49019607843137253, 0.5098039215686274}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9209621993127147, 0.07903780068728522}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[17] <= 18.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[15] <= -24.0) {
                                                                        memcpy(var0, (const double[]){0.6868686868686869, 0.31313131313131315}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9408, 0.0592}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9764957264957265, 0.023504273504273504}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[5] <= 588.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[7] <= 8.0) {
                                                    memcpy(var0, (const double[]){0.41825095057034223, 0.5817490494296578}, 2 * sizeof(double));
                                                } else {
                                                    if (input[4] <= 480.0) {
                                                        if (input[12] <= 3.0) {
                                                            if (input[7] <= 56.0) {
                                                                memcpy(var0, (const double[]){0.3744292237442922, 0.6255707762557078}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7017543859649122, 0.2982456140350877}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.890625, 0.109375}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8675577156743621, 0.1324422843256379}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        if (input[21] <= 3318.5) {
                                                            memcpy(var0, (const double[]){0.8383233532934131, 0.16167664670658682}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5489130434782609, 0.45108695652173914}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.5888888888888889, 0.4111111111111111}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[8] <= 112.0) {
                                                                    memcpy(var0, (const double[]){0.9207317073170732, 0.07926829268292683}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[21] <= 9275.5) {
                                                if (input[20] <= 40.5) {
                                                    if (input[13] <= 440.0) {
                                                        memcpy(var0, (const double[]){0.9303008070432869, 0.06969919295671313}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7422680412371134, 0.25773195876288657}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9703459637561779, 0.029654036243822075}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[5] <= 908.0) {
                                                    memcpy(var0, (const double[]){0.7619047619047619, 0.23809523809523808}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9148351648351648, 0.08516483516483517}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[19] <= 6.5) {
                                    if (input[21] <= 3199.5) {
                                        if (input[0] <= 29.5) {
                                            if (input[23] <= -0.5) {
                                                if (input[17] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.5770750988142292, 0.42292490118577075}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6962616822429907, 0.3037383177570093}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 17.5) {
                                                    if (input[16] <= 8.0) {
                                                        if (input[13] <= -40.0) {
                                                            memcpy(var0, (const double[]){0.963302752293578, 0.03669724770642202}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7865497076023392, 0.2134502923976608}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5919282511210763, 0.4080717488789238}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.9674418604651163, 0.03255813953488372}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7893462469733656, 0.2106537530266344}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9770253929866989, 0.022974607013301087}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 0.5) {
                                            if (input[17] <= 17.5) {
                                                if (input[16] <= 8.0) {
                                                    if (input[10] <= 8.0) {
                                                        if (input[15] <= -8.0) {
                                                            if (input[12] <= 10.0) {
                                                                memcpy(var0, (const double[]){0.2033898305084746, 0.7966101694915254}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5921052631578947, 0.40789473684210525}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[15] <= 8.0) {
                                                                if (input[16] <= -8.0) {
                                                                    memcpy(var0, (const double[]){0.4339622641509434, 0.5660377358490566}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9634551495016611, 0.036544850498338874}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.45231607629427795, 0.547683923705722}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8258064516129032, 0.17419354838709677}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= 136.0) {
                                                        if (input[21] <= 8742.5) {
                                                            memcpy(var0, (const double[]){0.4029126213592233, 0.5970873786407767}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[8] <= 40.0) {
                                                                memcpy(var0, (const double[]){0.08843537414965986, 0.9115646258503401}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6470588235294118, 0.35294117647058826}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8860759493670886, 0.11392405063291139}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.7865168539325843, 0.21348314606741572}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 19.5) {
                                                            if (input[12] <= 12.0) {
                                                                memcpy(var0, (const double[]){0.3197278911564626, 0.6802721088435374}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7368421052631579, 0.2631578947368421}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 20.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6797752808988764, 0.3202247191011236}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 18.5) {
                                                if (input[17] <= 17.5) {
                                                    if (input[3] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.802020202020202, 0.19797979797979798}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5512820512820513, 0.44871794871794873}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.5166666666666667, 0.48333333333333334}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.546448087431694, 0.453551912568306}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8164251207729468, 0.18357487922705315}, 2 * sizeof(double));
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
                        if (input[20] <= 27.0) {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.1038961038961039, 0.8961038961038961}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[5] <= 644.0) {
                                        memcpy(var0, (const double[]){0.34812286689419797, 0.6518771331058021}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7064676616915423, 0.2935323383084577}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[11] <= 6.5) {
                                memcpy(var0, (const double[]){0.3016759776536313, 0.6983240223463687}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 17.5) {
                                    memcpy(var0, (const double[]){0.02413793103448276, 0.9758620689655172}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.1369472182596291, 0.8630527817403709}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[18] <= 0.5) {
                if (input[17] <= 15.5) {
                    if (input[17] <= 14.5) {
                        if (input[17] <= 13.5) {
                            if (input[19] <= 6.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[19] <= 6.5) {
                            if (input[6] <= 0.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[5] <= 1528.0) {
                                    if (input[13] <= -108.0) {
                                        if (input[14] <= -372.0) {
                                            memcpy(var0, (const double[]){0.043052837573385516, 0.9569471624266145}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= -4276.0) {
                                                if (input[21] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.15888778550148958, 0.8411122144985105}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.34782608695652173, 0.6521739130434783}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[8] <= -60.0) {
                                                    memcpy(var0, (const double[]){0.05215123859191656, 0.9478487614080835}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.13918305597579425, 0.8608169440242057}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[21] <= 124.5) {
                                            if (input[8] <= 24.0) {
                                                memcpy(var0, (const double[]){0.10651974288337925, 0.8934802571166207}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.01084010840108401, 0.989159891598916}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.028186274509803922, 0.9718137254901961}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[23] <= 6.0) {
                                        memcpy(var0, (const double[]){0.5230769230769231, 0.47692307692307695}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.12173913043478261, 0.8782608695652174}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[17] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[17] <= 17.5) {
                            if (input[19] <= 6.5) {
                                if (input[11] <= 8.5) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[2] <= 0.5) {
                                            memcpy(var0, (const double[]){0.20819112627986347, 0.7918088737201365}, 2 * sizeof(double));
                                        } else {
                                            if (input[1] <= 2.5) {
                                                memcpy(var0, (const double[]){0.13385826771653545, 0.8661417322834646}, 2 * sizeof(double));
                                            } else {
                                                if (input[7] <= -4284.0) {
                                                    memcpy(var0, (const double[]){0.26262626262626265, 0.7373737373737373}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4559417946645109, 0.5440582053354891}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[12] <= 3.0) {
                                        if (input[6] <= 0.5) {
                                            if (input[21] <= 2667.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.1016949152542373, 0.8983050847457628}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[22] <= -49.5) {
                                                memcpy(var0, (const double[]){0.17359187442289936, 0.8264081255771006}, 2 * sizeof(double));
                                            } else {
                                                if (input[4] <= 1376.0) {
                                                    if (input[21] <= 6050.5) {
                                                        memcpy(var0, (const double[]){0.15666666666666668, 0.8433333333333334}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.046681254558716266, 0.9533187454412837}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.042134831460674156, 0.9578651685393258}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[19] <= 6.5) {
                                        if (input[11] <= 10.5) {
                                            if (input[12] <= 8.0) {
                                                if (input[12] <= 3.0) {
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 1076.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.375, 0.625}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.13636363636363635, 0.8636363636363636}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[3] <= 2.5) {
                                                                if (input[11] <= 9.5) {
                                                                    memcpy(var0, (const double[]){0.3861349235929929, 0.613865076407007}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[6] <= 1.5) {
                                                                        if (input[4] <= 1440.0) {
                                                                            memcpy(var0, (const double[]){0.5644768856447688, 0.43552311435523117}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.24, 0.76}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5959933222036727, 0.4040066777963272}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2665198237885463, 0.7334801762114538}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.5641025641025641, 0.4358974358974359}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= 2.0) {
                                                                memcpy(var0, (const double[]){0.94579945799458, 0.05420054200542006}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7627118644067796, 0.23728813559322035}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 9771.0) {
                                                    memcpy(var0, (const double[]){0.20454545454545456, 0.7954545454545454}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.03592814371257485, 0.9640718562874252}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[6] <= 0.5) {
                                                memcpy(var0, (const double[]){0.008012820512820512, 0.9919871794871795}, 2 * sizeof(double));
                                            } else {
                                                if (input[13] <= -712.0) {
                                                    memcpy(var0, (const double[]){0.246875, 0.753125}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 3.0) {
                                                        if (input[4] <= 2016.0) {
                                                            if (input[21] <= 1025.0) {
                                                                memcpy(var0, (const double[]){0.15140845070422534, 0.8485915492957746}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0611439842209073, 0.9388560157790927}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[6] <= 2.5) {
                                                                memcpy(var0, (const double[]){0.020599250936329586, 0.9794007490636704}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.176, 0.824}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 21.5) {
                                            if (input[19] <= 6.5) {
                                                if (input[11] <= 12.5) {
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 874.0) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[10] <= 6.0) {
                                                                memcpy(var0, (const double[]){0.3398496240601504, 0.6601503759398496}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.05063291139240506, 0.9493670886075949}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[12] <= 8.0) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[3] <= 2.5) {
                                                                    if (input[3] <= 1.5) {
                                                                        memcpy(var0, (const double[]){0.16393442622950818, 0.8360655737704918}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[6] <= 2.5) {
                                                                            if (input[7] <= 216.0) {
                                                                                memcpy(var0, (const double[]){0.364208318769661, 0.635791681230339}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5725490196078431, 0.42745098039215684}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[7] <= -116.0) {
                                                                                memcpy(var0, (const double[]){0.6489675516224189, 0.35103244837758113}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.3531746031746032, 0.6468253968253969}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2367816091954023, 0.7632183908045977}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7937411095305832, 0.20625889046941678}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 2472.5) {
                                                                memcpy(var0, (const double[]){0.39069767441860465, 0.6093023255813953}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.07777777777777778, 0.9222222222222223}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        if (input[21] <= 2301.0) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.10144927536231885, 0.8985507246376812}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[7] <= -4292.0) {
                                                            memcpy(var0, (const double[]){0.36893203883495146, 0.6310679611650486}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 1448.0) {
                                                                memcpy(var0, (const double[]){0.09799147900182593, 0.9020085209981741}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5217391304347826, 0.4782608695652174}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 23.5) {
                                                    if (input[19] <= 6.5) {
                                                        if (input[11] <= 14.5) {
                                                            if (input[6] <= 0.5) {
                                                                if (input[21] <= 1869.0) {
                                                                    memcpy(var0, (const double[]){0.0023752969121140144, 0.997624703087886}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[11] <= 10.0) {
                                                                        memcpy(var0, (const double[]){0.528169014084507, 0.47183098591549294}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= 12054.5) {
                                                                            memcpy(var0, (const double[]){0.3081395348837209, 0.6918604651162791}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.020833333333333332, 0.9791666666666666}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[12] <= 8.0) {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[1] <= 2.5) {
                                                                            memcpy(var0, (const double[]){0.17543859649122806, 0.8245614035087719}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[22] <= -51.5) {
                                                                                memcpy(var0, (const double[]){0.5467741935483871, 0.4532258064516129}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[15] <= -20.0) {
                                                                                    memcpy(var0, (const double[]){0.3185840707964602, 0.6814159292035398}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= 3451.5) {
                                                                                        memcpy(var0, (const double[]){0.5425425425425425, 0.4574574574574575}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.3651925820256776, 0.6348074179743224}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7710843373493976, 0.2289156626506024}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[0] <= 34.5) {
                                                                        if (input[4] <= 32.0) {
                                                                            memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.23255813953488372, 0.7674418604651163}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.00851063829787234, 0.9914893617021276}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[6] <= 0.5) {
                                                                if (input[21] <= 3335.5) {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.12987012987012986, 0.8701298701298701}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[7] <= -4308.0) {
                                                                    memcpy(var0, (const double[]){0.4782608695652174, 0.5217391304347826}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[4] <= 96.0) {
                                                                        memcpy(var0, (const double[]){0.46464646464646464, 0.5353535353535354}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1424821897262842, 0.8575178102737158}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 25.5) {
                                                            if (input[11] <= 16.5) {
                                                                if (input[19] <= 6.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 1425.5) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= 10.0) {
                                                                                if (input[21] <= 16728.0) {
                                                                                    memcpy(var0, (const double[]){0.5560165975103735, 0.44398340248962653}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.046511627906976744, 0.9534883720930233}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.20883534136546184, 0.7911646586345381}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 15.5) {
                                                                            if (input[12] <= 10.0) {
                                                                                if (input[14] <= 92.0) {
                                                                                    if (input[16] <= 296.0) {
                                                                                        memcpy(var0, (const double[]){0.4573055028462998, 0.5426944971537002}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.14705882352941177, 0.8529411764705882}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[23] <= 7.5) {
                                                                                        memcpy(var0, (const double[]){0.14919354838709678, 0.8508064516129032}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.3890784982935154, 0.6109215017064846}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[0] <= 34.5) {
                                                                                    memcpy(var0, (const double[]){0.22535211267605634, 0.7746478873239436}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.012658227848101266, 0.9873417721518988}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[16] <= -392.0) {
                                                                                memcpy(var0, (const double[]){0.898876404494382, 0.10112359550561797}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5372168284789643, 0.4627831715210356}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[6] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.011444921316165951, 0.9885550786838341}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[16] <= -92.0) {
                                                                        memcpy(var0, (const double[]){0.2800875273522976, 0.7199124726477024}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= -63.0) {
                                                                            memcpy(var0, (const double[]){0.32, 0.68}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.11461619348054679, 0.8853838065194533}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[7] <= -3908.0) {
                                                                    if (input[15] <= -136.0) {
                                                                        if (input[15] <= -616.0) {
                                                                            if (input[17] <= 27.5) {
                                                                                memcpy(var0, (const double[]){0.2534246575342466, 0.7465753424657534}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[16] <= -796.0) {
                                                                                    if (input[0] <= 29.5) {
                                                                                        memcpy(var0, (const double[]){0.9657980456026058, 0.03420195439739414}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.1875, 0.8125}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[17] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[17] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.2641509433962264, 0.7358490566037735}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[15] <= -892.0) {
                                                                                                    if (input[8] <= -644.0) {
                                                                                                        memcpy(var0, (const double[]){0.45098039215686275, 0.5490196078431373}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.767277856135402, 0.23272214386459802}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[16] <= -56.0) {
                                                                                memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.022641509433962263, 0.9773584905660377}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[5] <= 1016.0) {
                                                                            if (input[13] <= -3844.0) {
                                                                                if (input[13] <= -5768.0) {
                                                                                    memcpy(var0, (const double[]){0.9954265888661095, 0.0045734111338905535}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[4] <= 544.0) {
                                                                                        memcpy(var0, (const double[]){0.9903398926654741, 0.00966010733452594}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[23] <= -120.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6986899563318777, 0.30131004366812225}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.7649769585253456, 0.2350230414746544}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[4] <= 352.0) {
                                                                                if (input[7] <= -5704.0) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[4] <= 288.0) {
                                                                                        memcpy(var0, (const double[]){0.9386666666666666, 0.06133333333333333}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.45161290322580644, 0.5483870967741935}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[15] <= 104.0) {
                                                                                    memcpy(var0, (const double[]){0.363013698630137, 0.636986301369863}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.96875, 0.03125}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[17] <= 27.5) {
                                                                        if (input[11] <= 18.5) {
                                                                            if (input[6] <= 1.5) {
                                                                                if (input[21] <= 11.5) {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[21] <= -27.5) {
                                                                                            memcpy(var0, (const double[]){0.5595238095238095, 0.44047619047619047}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[15] <= -528.0) {
                                                                                                memcpy(var0, (const double[]){0.5869565217391305, 0.41304347826086957}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.19689119170984457, 0.8031088082901554}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.3795811518324607, 0.6204188481675392}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[19] <= 6.5) {
                                                                                    if (input[11] <= 15.5) {
                                                                                        memcpy(var0, (const double[]){0.3403185247275775, 0.6596814752724225}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[22] <= -97.0) {
                                                                                            memcpy(var0, (const double[]){0.9263157894736842, 0.07368421052631578}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6086956521739131, 0.391304347826087}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[21] <= 4997.0) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.25806451612903225, 0.7419354838709677}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[4] <= 416.0) {
                                                                                    memcpy(var0, (const double[]){0.28969359331476324, 0.7103064066852368}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[16] <= -28.0) {
                                                                                        memcpy(var0, (const double[]){0.24367816091954023, 0.7563218390804598}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[21] <= 32.5) {
                                                                                            memcpy(var0, (const double[]){0.06229508196721312, 0.9377049180327869}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.20320855614973263, 0.7967914438502673}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[17] <= 28.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[17] <= 29.5) {
                                                                                if (input[11] <= 20.5) {
                                                                                    if (input[6] <= 0.5) {
                                                                                        if (input[21] <= 1763.5) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[14] <= 78.0) {
                                                                                                if (input[12] <= 10.0) {
                                                                                                    memcpy(var0, (const double[]){0.5803108808290155, 0.41968911917098445}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.27906976744186046, 0.7209302325581395}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.0425531914893617, 0.9574468085106383}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[11] <= 18.5) {
                                                                                            if (input[19] <= 6.5) {
                                                                                                if (input[20] <= 44.0) {
                                                                                                    if (input[5] <= 1396.0) {
                                                                                                        memcpy(var0, (const double[]){0.3357807146353402, 0.6642192853646598}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.022988505747126436, 0.9770114942528736}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6251808972503617, 0.3748191027496382}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.008146639511201629, 0.9918533604887984}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 23.5) {
                                                                                            memcpy(var0, (const double[]){0.1251646903820817, 0.8748353096179183}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[4] <= 160.0) {
                                                                                                memcpy(var0, (const double[]){0.7307692307692307, 0.2692307692307692}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.2560240963855422, 0.7439759036144579}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 30.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 31.5) {
                                                                                        if (input[11] <= 23.5) {
                                                                                            if (input[11] <= 20.5) {
                                                                                                if (input[4] <= 1824.0) {
                                                                                                    memcpy(var0, (const double[]){0.36470588235294116, 0.6352941176470588}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.2696078431372549, 0.7303921568627451}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    memcpy(var0, (const double[]){0.04716981132075472, 0.9528301886792453}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[4] <= 32.0) {
                                                                                                        memcpy(var0, (const double[]){0.9482758620689655, 0.05172413793103448}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.635122838944495, 0.364877161055505}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[6] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.008213552361396304, 0.9917864476386037}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[11] <= 25.5) {
                                                                                                    memcpy(var0, (const double[]){0.1256245538900785, 0.8743754461099215}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.2884927066450567, 0.7115072933549432}, 2 * sizeof(double));
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
                                                                                                        if (input[21] <= 740.5) {
                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[15] <= -186.0) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.40941176470588236, 0.5905882352941176}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[11] <= 21.5) {
                                                                                                            if (input[5] <= 696.0) {
                                                                                                                memcpy(var0, (const double[]){0.27764127764127766, 0.7223587223587223}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.4675834970530452, 0.5324165029469549}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[4] <= 32.0) {
                                                                                                                memcpy(var0, (const double[]){0.9322033898305084, 0.06779661016949153}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[15] <= -560.0) {
                                                                                                                    memcpy(var0, (const double[]){0.8110831234256927, 0.1889168765743073}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.5797752808988764, 0.4202247191011236}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[6] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[14] <= 132.0) {
                                                                                                            memcpy(var0, (const double[]){0.2732793522267207, 0.7267206477732794}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.13274336283185842, 0.8672566371681416}, 2 * sizeof(double));
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
                                                                                                                if (input[21] <= 1159.0) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[8] <= 126.0) {
                                                                                                                        memcpy(var0, (const double[]){0.425531914893617, 0.574468085106383}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 21.5) {
                                                                                                                    memcpy(var0, (const double[]){0.34980988593155893, 0.6501901140684411}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[16] <= 4.0) {
                                                                                                                        if (input[4] <= 32.0) {
                                                                                                                            memcpy(var0, (const double[]){0.9692307692307692, 0.03076923076923077}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.7335907335907336, 0.26640926640926643}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.5304136253041363, 0.46958637469586373}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[11] <= 29.0) {
                                                                                                                    memcpy(var0, (const double[]){0.13423959218351741, 0.8657604078164826}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[4] <= 1824.0) {
                                                                                                                        memcpy(var0, (const double[]){0.4053156146179402, 0.5946843853820598}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.07633587786259542, 0.9236641221374046}, 2 * sizeof(double));
                                                                                                                    }
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
                                                                                                                        if (input[21] <= 1743.0) {
                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.24358974358974358, 0.7564102564102564}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[11] <= 25.5) {
                                                                                                                            if (input[14] <= 220.0) {
                                                                                                                                memcpy(var0, (const double[]){0.4565537555228277, 0.5434462444771723}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.2235294117647059, 0.7764705882352941}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[4] <= 96.0) {
                                                                                                                                memcpy(var0, (const double[]){0.9488372093023256, 0.05116279069767442}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[20] <= 39.0) {
                                                                                                                                    if (input[6] <= 1.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.5367088607594936, 0.46329113924050636}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.7749510763209393, 0.22504892367906065}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.9148936170212766, 0.0851063829787234}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[4] <= 2400.0) {
                                                                                                                            memcpy(var0, (const double[]){0.20647419072615922, 0.7935258092738408}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[16] <= 12.0) {
                                                                                                                                memcpy(var0, (const double[]){0.15568862275449102, 0.844311377245509}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[17] <= 38.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[17] <= 39.5) {
                                                                                                                        if (input[11] <= 31.5) {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                if (input[21] <= 933.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[11] <= 27.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.35544430538172717, 0.6445556946182729}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[4] <= 544.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.9178743961352657, 0.0821256038647343}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[6] <= 1.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.5833333333333334, 0.4166666666666667}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.8219895287958116, 0.17801047120418848}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[4] <= 96.0) {
                                                                                                                                    memcpy(var0, (const double[]){0.5897435897435898, 0.41025641025641024}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 33.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.09503695881731784, 0.9049630411826821}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.328042328042328, 0.671957671957672}, 2 * sizeof(double));
                                                                                                                                    }
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
                                                                                                                                        if (input[21] <= 1760.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.25806451612903225, 0.7419354838709677}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 29.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.36535859269282817, 0.6346414073071719}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[16] <= -120.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.9859154929577465, 0.014084507042253521}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[4] <= 160.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.935361216730038, 0.06463878326996197}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.7298747763864043, 0.2701252236135957}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[11] <= 35.0) {
                                                                                                                                            memcpy(var0, (const double[]){0.10526315789473684, 0.8947368421052632}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.35526315789473684, 0.6447368421052632}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[17] <= 42.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[4] <= 160.0) {
                                                                                                                                        if (input[7] <= -514.0) {
                                                                                                                                            if (input[16] <= 176.0) {
                                                                                                                                                if (input[22] <= -120.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.9910536779324056, 0.008946322067594433}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[4] <= 32.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.9911646586345382, 0.008835341365461847}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.8051948051948052, 0.19480519480519481}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.591304347826087, 0.40869565217391307}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[21] <= 3105.5) {
                                                                                                                                                if (input[17] <= 43.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.4142857142857143, 0.5857142857142857}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 44.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 45.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.43564356435643564, 0.5643564356435643}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 46.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[14] <= -1634.0) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.3111111111111111, 0.6888888888888889}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.8507795100222717, 0.1492204899777283}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[13] <= 866.0) {
                                                                                                                                                    if (input[15] <= -148.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.37209302325581395, 0.627906976744186}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.7829787234042553, 0.2170212765957447}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.3467741935483871, 0.6532258064516129}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 43.5) {
                                                                                                                                            if (input[11] <= 34.5) {
                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                    if (input[21] <= 2120.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.23853211009174313, 0.7614678899082569}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[11] <= 32.5) {
                                                                                                                                                        memcpy(var0, (const double[]){0.42752562225475843, 0.5724743777452416}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.8549618320610687, 0.1450381679389313}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.1147227533460803, 0.8852772466539197}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 44.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 45.5) {
                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                        if (input[21] <= 1322.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.2978723404255319, 0.7021276595744681}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[11] <= 37.0) {
                                                                                                                                                            if (input[11] <= 35.5) {
                                                                                                                                                                memcpy(var0, (const double[]){0.4594059405940594, 0.5405940594059406}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.9203980099502488, 0.07960199004975124}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.11976047904191617, 0.8802395209580839}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 46.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 47.5) {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                if (input[21] <= 1275.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.2840909090909091, 0.7159090909090909}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[11] <= 39.0) {
                                                                                                                                                                    if (input[11] <= 37.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.3854166666666667, 0.6145833333333334}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.8593155893536122, 0.14068441064638784}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.11518324607329843, 0.8848167539267016}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 48.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 49.5) {
                                                                                                                                                                    if (input[6] <= 0.5) {
                                                                                                                                                                        if (input[21] <= 1587.0) {
                                                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.31446540880503143, 0.6855345911949685}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[11] <= 41.0) {
                                                                                                                                                                            if (input[11] <= 37.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){0.4229390681003584, 0.5770609318996416}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.9119170984455959, 0.08808290155440414}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, (const double[]){0.11267605633802817, 0.8873239436619719}, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 50.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[17] <= 51.5) {
                                                                                                                                                                            if (input[11] <= 43.0) {
                                                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.17316017316017315, 0.8268398268398268}, 2 * sizeof(double));
                                                                                                                                                                                } else {
                                                                                                                                                                                    memcpy(var0, (const double[]){0.5505226480836237, 0.44947735191637633}, 2 * sizeof(double));
                                                                                                                                                                                }
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, (const double[]){0.007905138339920948, 0.9920948616600791}, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            if (input[17] <= 52.5) {
                                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                if (input[19] <= 6.5) {
                                                                                                                                                                                    if (input[17] <= 53.5) {
                                                                                                                                                                                        if (input[11] <= 45.0) {
                                                                                                                                                                                            if (input[22] <= 119.5) {
                                                                                                                                                                                                memcpy(var0, (const double[]){0.2756756756756757, 0.7243243243243244}, 2 * sizeof(double));
                                                                                                                                                                                            } else {
                                                                                                                                                                                                memcpy(var0, (const double[]){0.85, 0.15}, 2 * sizeof(double));
                                                                                                                                                                                            }
                                                                                                                                                                                        } else {
                                                                                                                                                                                            memcpy(var0, (const double[]){0.015151515151515152, 0.9848484848484849}, 2 * sizeof(double));
                                                                                                                                                                                        }
                                                                                                                                                                                    } else {
                                                                                                                                                                                        if (input[17] <= 54.5) {
                                                                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                        } else {
                                                                                                                                                                                            if (input[17] <= 55.5) {
                                                                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                                                                    memcpy(var0, (const double[]){0.11162790697674418, 0.8883720930232558}, 2 * sizeof(double));
                                                                                                                                                                                                } else {
                                                                                                                                                                                                    memcpy(var0, (const double[]){0.45226130653266333, 0.5477386934673367}, 2 * sizeof(double));
                                                                                                                                                                                                }
                                                                                                                                                                                            } else {
                                                                                                                                                                                                if (input[17] <= 56.5) {
                                                                                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                                                } else {
                                                                                                                                                                                                    if (input[21] <= 16821.5) {
                                                                                                                                                                                                        if (input[21] <= 1343.5) {
                                                                                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                            memcpy(var0, (const double[]){0.47352941176470587, 0.5264705882352941}, 2 * sizeof(double));
                                                                                                                                                                                                        }
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                        memcpy(var0, (const double[]){0.6948640483383686, 0.30513595166163143}, 2 * sizeof(double));
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
                if (input[12] <= 10.0) {
                    if (input[6] <= 0.5) {
                        if (input[17] <= 19.5) {
                            if (input[20] <= 35.0) {
                                if (input[21] <= 2850.5) {
                                    memcpy(var0, (const double[]){0.010526315789473684, 0.9894736842105263}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.1353558926487748, 0.8646441073512252}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.018198362147406732, 0.9818016378525932}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 20.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[20] <= 30.5) {
                                    if (input[11] <= 10.0) {
                                        memcpy(var0, (const double[]){0.656319290465632, 0.3436807095343681}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.17582417582417584, 0.8241758241758241}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 12.0) {
                                                memcpy(var0, (const double[]){0.7534883720930232, 0.24651162790697675}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 49.5) {
                                                    memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6583850931677019, 0.3416149068322981}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 43.5) {
                                        if (input[20] <= 39.0) {
                                            if (input[11] <= 10.0) {
                                                memcpy(var0, (const double[]){0.38605898123324395, 0.613941018766756}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 1198.0) {
                                                    if (input[17] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.04020100502512563, 0.9597989949748744}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2091295116772824, 0.7908704883227177}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.011976047904191617, 0.9880239520958084}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.08249027237354085, 0.9175097276264591}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 16.0) {
                                            memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.31503150315031503, 0.684968496849685}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[6] <= 2.5) {
                            if (input[17] <= 17.5) {
                                if (input[17] <= 16.5) {
                                    if (input[17] <= 15.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[21] <= 2693.5) {
                                        if (input[20] <= 35.0) {
                                            if (input[12] <= 3.0) {
                                                memcpy(var0, (const double[]){0.4875, 0.5125}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= 8.0) {
                                                    memcpy(var0, (const double[]){0.7517482517482518, 0.24825174825174826}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.44594594594594594, 0.5540540540540541}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8356807511737089, 0.1643192488262911}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 19.5) {
                                            if (input[12] <= 8.0) {
                                                if (input[12] <= 3.0) {
                                                    if (input[22] <= 3.5) {
                                                        memcpy(var0, (const double[]){0.09982788296041308, 0.9001721170395869}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4608695652173913, 0.5391304347826087}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[11] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.6752688172043011, 0.3247311827956989}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[23] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.15789473684210525, 0.8421052631578947}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.032454361054766734, 0.9675456389452333}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 1028.0) {
                                                    if (input[11] <= 10.0) {
                                                        if (input[12] <= 3.0) {
                                                            memcpy(var0, (const double[]){0.4798206278026906, 0.5201793721973094}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7593360995850622, 0.24066390041493776}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 31.5) {
                                                            if (input[12] <= 3.0) {
                                                                if (input[22] <= 33.5) {
                                                                    if (input[17] <= 27.5) {
                                                                        memcpy(var0, (const double[]){0.18699910952804988, 0.8130008904719501}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 28.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.30303030303030304, 0.696969696969697}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[23] <= -2.5) {
                                                                        memcpy(var0, (const double[]){0.2268041237113402, 0.7731958762886598}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6543778801843319, 0.3456221198156682}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[12] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.6745843230403801, 0.3254156769596199}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.26573426573426573, 0.7342657342657343}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5018050541516246, 0.4981949458483754}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6226415094339622, 0.37735849056603776}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 31.5) {
                                if (input[17] <= 19.5) {
                                    memcpy(var0, (const double[]){0.017482517482517484, 0.9825174825174825}, 2 * sizeof(double));
                                } else {
                                    if (input[23] <= -2.5) {
                                        memcpy(var0, (const double[]){0.035897435897435895, 0.9641025641025641}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.16243654822335024, 0.8375634517766497}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.26644736842105265, 0.7335526315789473}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[20] <= 40.5) {
                        if (input[17] <= 39.5) {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.026936026936026935, 0.9730639730639731}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[17] <= 21.5) {
                                            memcpy(var0, (const double[]){0.20275862068965517, 0.7972413793103448}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[21] <= 4629.5) {
                                                    memcpy(var0, (const double[]){0.2596491228070175, 0.7403508771929824}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5423728813559322, 0.4576271186440678}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 23.5) {
                                            if (input[9] <= 94.0) {
                                                memcpy(var0, (const double[]){0.07582260371959942, 0.9241773962804005}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.2900763358778626, 0.7099236641221374}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= 12.0) {
                                                    if (input[17] <= 25.5) {
                                                        memcpy(var0, (const double[]){0.17289719626168223, 0.8271028037383178}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4702702702702703, 0.5297297297297298}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[6] <= 0.5) {
                                                        if (input[17] <= 25.5) {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.15007656967840735, 0.8499234303215927}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[21] <= 1871.5) {
                                                            memcpy(var0, (const double[]){0.5899280575539568, 0.41007194244604317}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[6] <= 2.5) {
                                                                memcpy(var0, (const double[]){0.2828854314002829, 0.7171145685997171}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[7] <= 132.0) {
                                                                    memcpy(var0, (const double[]){0.07142857142857142, 0.9285714285714286}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4166666666666667, 0.5833333333333334}, 2 * sizeof(double));
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
                            if (input[11] <= 18.0) {
                                memcpy(var0, (const double[]){0.660377358490566, 0.33962264150943394}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.3485915492957746, 0.6514084507042254}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[6] <= 0.5) {
                            if (input[0] <= 34.5) {
                                memcpy(var0, (const double[]){0.06642066420664207, 0.933579335793358}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[6] <= 2.5) {
                                if (input[16] <= -40.0) {
                                    if (input[12] <= 22.0) {
                                        memcpy(var0, (const double[]){0.040880503144654086, 0.9591194968553459}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[21] <= 4836.0) {
                                        memcpy(var0, (const double[]){0.5892857142857143, 0.4107142857142857}, 2 * sizeof(double));
                                    } else {
                                        if (input[12] <= 28.0) {
                                            memcpy(var0, (const double[]){0.18223938223938224, 0.8177606177606178}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5252525252525253, 0.47474747474747475}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.007751937984496124, 0.9922480620155039}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
