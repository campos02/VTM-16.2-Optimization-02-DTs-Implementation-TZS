#include <string.h>
#include "DtRefinement.h"

void DtRefinement::score(double * input, double * output) {
    double var0[2];
    if (input[18] <= 15.5) {
        if (input[18] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[12] <= 6.5) {
                if (input[18] <= 13.5) {
                    memcpy(var0, (const double[]){0.01093974175035868, 0.9890602582496413}, 2 * sizeof(double));
                } else {
                    if (input[14] <= 2.0) {
                        if (input[14] <= -2.0) {
                            if (input[18] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[8] <= -12.0) {
                                    if (input[22] <= -30.5) {
                                        memcpy(var0, (const double[]){0.26301369863013696, 0.736986301369863}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8888888888888888, 0.1111111111111111}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.06358381502890173, 0.9364161849710982}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[15] <= 2.0) {
                                if (input[15] <= -2.0) {
                                    memcpy(var0, (const double[]){0.1171875, 0.8828125}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9923076923076923, 0.007692307692307693}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.15714285714285714, 0.8428571428571429}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[18] <= 14.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[8] <= 2.0) {
                                memcpy(var0, (const double[]){0.022364217252396165, 0.9776357827476039}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.32679738562091504, 0.673202614379085}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[18] <= 14.5) {
                    if (input[24] <= 36815.0) {
                        if (input[18] <= 13.5) {
                            memcpy(var0, (const double[]){0.006791171477079796, 0.9932088285229203}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.4888888888888889, 0.5111111111111111}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 654349184.0) {
                        if (input[20] <= 35.5) {
                            memcpy(var0, (const double[]){0.008650455615098711, 0.9913495443849013}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.0011056947314049587, 0.998894305268595}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[12] <= 8.5) {
            if (input[13] <= 8.5) {
                if (input[18] <= 18.5) {
                    if (input[18] <= 16.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[15] <= -2.0) {
                            if (input[19] <= 0.5) {
                                if (input[18] <= 17.5) {
                                    if (input[9] <= -58.0) {
                                        if (input[13] <= 3.0) {
                                            if (input[21] <= 32091.5) {
                                                memcpy(var0, (const double[]){0.25720384204909286, 0.7427961579509071}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5214285714285715, 0.4785714285714286}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 3.5) {
                                                if (input[2] <= 1.5) {
                                                    memcpy(var0, (const double[]){0.7922392886014551, 0.20776071139854488}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5060240963855421, 0.4939759036144578}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5633802816901409, 0.43661971830985913}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[9] <= -14.0) {
                                            if (input[17] <= 2.0) {
                                                if (input[26] <= 3456.0) {
                                                    memcpy(var0, (const double[]){0.25147347740667975, 0.7485265225933202}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.550561797752809, 0.449438202247191}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.09570957095709572, 0.9042904290429042}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.04604758250191865, 0.9539524174980814}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[15] <= -14.0) {
                                    if (input[10] <= 22.0) {
                                        memcpy(var0, (const double[]){0.834178131788559, 0.165821868211441}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.950910530482977, 0.04908946951702296}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 17.5) {
                                        if (input[2] <= 1.5) {
                                            memcpy(var0, (const double[]){0.48695652173913045, 0.5130434782608696}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.2112676056338028, 0.7887323943661971}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[15] <= 2.0) {
                                if (input[14] <= 2.0) {
                                    if (input[14] <= -2.0) {
                                        if (input[8] <= -30.0) {
                                            if (input[17] <= -2.0) {
                                                if (input[11] <= -12.0) {
                                                    memcpy(var0, (const double[]){0.7639344262295082, 0.2360655737704918}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 17.5) {
                                                        if (input[26] <= 3456.0) {
                                                            memcpy(var0, (const double[]){0.07309941520467836, 0.9269005847953217}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4625, 0.5375}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 2.0) {
                                                    if (input[10] <= 62.0) {
                                                        if (input[18] <= 17.5) {
                                                            if (input[14] <= -180.0) {
                                                                if (input[8] <= -700.0) {
                                                                    if (input[14] <= -2824.0) {
                                                                        memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7186440677966102, 0.28135593220338984}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[25] <= 1.0) {
                                                                        memcpy(var0, (const double[]){0.38354037267080743, 0.6164596273291926}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14482758620689656, 0.8551724137931035}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[10] <= 50.0) {
                                                                    if (input[16] <= -40.0) {
                                                                        if (input[2] <= 1.5) {
                                                                            if (input[4] <= 120.0) {
                                                                                memcpy(var0, (const double[]){0.47959183673469385, 0.5204081632653061}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[8] <= -136.0) {
                                                                                    memcpy(var0, (const double[]){0.5307692307692308, 0.46923076923076923}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[5] <= 376.0) {
                                                                                        memcpy(var0, (const double[]){0.8633093525179856, 0.1366906474820144}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.6578947368421053, 0.34210526315789475}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8959276018099548, 0.10407239819004525}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.31095406360424027, 0.6890459363957597}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= -72.0) {
                                                            if (input[19] <= 0.5) {
                                                                if (input[8] <= -124.0) {
                                                                    if (input[8] <= -186.0) {
                                                                        if (input[14] <= -312.0) {
                                                                            if (input[3] <= 2.5) {
                                                                                memcpy(var0, (const double[]){0.8847505270555165, 0.11524947294448348}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.7244094488188977, 0.2755905511811024}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 17.5) {
                                                                                if (input[14] <= -232.0) {
                                                                                    memcpy(var0, (const double[]){0.2962962962962963, 0.7037037037037037}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[8] <= -228.0) {
                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.8267477203647416, 0.17325227963525835}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9596244131455399, 0.04037558685446009}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9502529510961214, 0.049747048903878585}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= 62.0) {
                                                                memcpy(var0, (const double[]){0.8679927667269439, 0.13200723327305605}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9733040201005025, 0.02669597989949749}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 17.5) {
                                                        if (input[19] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.19682539682539682, 0.8031746031746032}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9111111111111111, 0.08888888888888889}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 17.5) {
                                                if (input[19] <= 0.5) {
                                                    if (input[27] <= 102.0) {
                                                        if (input[22] <= -0.5) {
                                                            memcpy(var0, (const double[]){0.35537190082644626, 0.6446280991735537}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.08085808580858085, 0.9191419141914191}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.04535864978902954, 0.9546413502109705}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[14] <= -14.0) {
                                                        memcpy(var0, (const double[]){0.7620578778135049, 0.2379421221864952}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[9] <= 2.0) {
                                                            if (input[8] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.7471264367816092, 0.25287356321839083}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.37362637362637363, 0.6263736263736264}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.09523809523809523, 0.9047619047619048}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[16] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[18] <= 17.5) {
                                                    if (input[10] <= -6.0) {
                                                        if (input[8] <= 48.0) {
                                                            memcpy(var0, (const double[]){0.7959866220735786, 0.2040133779264214}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.13846153846153847, 0.8615384615384616}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[27] <= 156.0) {
                                                            if (input[19] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.10821917808219178, 0.8917808219178082}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6618705035971223, 0.3381294964028777}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9078947368421053, 0.09210526315789473}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= -2.0) {
                                                    if (input[19] <= 0.5) {
                                                        if (input[11] <= -10.0) {
                                                            memcpy(var0, (const double[]){0.7619047619047619, 0.23809523809523808}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.08097165991902834, 0.9190283400809717}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8867924528301887, 0.11320754716981132}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 2.0) {
                                                        if (input[18] <= 17.5) {
                                                            if (input[8] <= 2.0) {
                                                                if (input[2] <= 1.5) {
                                                                    if (input[8] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.7846153846153846, 0.2153846153846154}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9754745739226826, 0.024525426077317444}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9383975305328144, 0.06160246946718561}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6605504587155964, 0.3394495412844037}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[11] <= 2.0) {
                                                            if (input[27] <= 102.0) {
                                                                memcpy(var0, (const double[]){0.09911894273127753, 0.9008810572687225}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.37349397590361444, 0.6265060240963856}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7473684210526316, 0.25263157894736843}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[10] <= 2.0) {
                                                if (input[18] <= 17.5) {
                                                    if (input[19] <= 0.5) {
                                                        if (input[27] <= 156.0) {
                                                            memcpy(var0, (const double[]){0.12093862815884476, 0.8790613718411552}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5692307692307692, 0.4307692307692308}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7380952380952381, 0.2619047619047619}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[8] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                                } else {
                                                    if (input[10] <= 14.0) {
                                                        memcpy(var0, (const double[]){0.6882352941176471, 0.31176470588235294}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8943488943488943, 0.10565110565110565}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[10] <= -30.0) {
                                        if (input[17] <= 2.0) {
                                            if (input[8] <= 46.0) {
                                                if (input[19] <= 0.5) {
                                                    if (input[16] <= -72.0) {
                                                        memcpy(var0, (const double[]){0.7926829268292683, 0.2073170731707317}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.14342629482071714, 0.8565737051792829}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[8] <= 38.0) {
                                                        memcpy(var0, (const double[]){0.9395238095238095, 0.060476190476190475}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.42127659574468085, 0.5787234042553191}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.6298076923076923, 0.3701923076923077}, 2 * sizeof(double));
                                                } else {
                                                    if (input[2] <= 1.5) {
                                                        if (input[1] <= 3.5) {
                                                            memcpy(var0, (const double[]){0.9436899130169388, 0.05631008698306119}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[10] <= -198.0) {
                                                                memcpy(var0, (const double[]){0.7156862745098039, 0.28431372549019607}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8936959208899876, 0.10630407911001236}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8421900161030595, 0.15780998389694043}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[19] <= 0.5) {
                                                memcpy(var0, (const double[]){0.404, 0.596}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8275862068965517, 0.1724137931034483}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 17.5) {
                                            if (input[19] <= 0.5) {
                                                if (input[8] <= 14.0) {
                                                    if (input[21] <= 292.0) {
                                                        memcpy(var0, (const double[]){0.49122807017543857, 0.5087719298245614}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.08664772727272728, 0.9133522727272727}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[10] <= 322.0) {
                                                        if (input[13] <= 3.0) {
                                                            if (input[22] <= 3.5) {
                                                                memcpy(var0, (const double[]){0.2524154589371981, 0.7475845410628019}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 2.0) {
                                                                    if (input[17] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.17346938775510204, 0.826530612244898}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[14] <= 62.0) {
                                                                            memcpy(var0, (const double[]){0.30097087378640774, 0.6990291262135923}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[22] <= 9.5) {
                                                                                memcpy(var0, (const double[]){0.8087431693989071, 0.1912568306010929}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[14] <= 446.0) {
                                                                                    if (input[14] <= 82.0) {
                                                                                        memcpy(var0, (const double[]){0.7368421052631579, 0.2631578947368421}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[8] <= 88.0) {
                                                                                            memcpy(var0, (const double[]){0.023529411764705882, 0.9764705882352941}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.3605015673981191, 0.6394984326018809}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[23] <= -0.5) {
                                                                                        memcpy(var0, (const double[]){0.3111111111111111, 0.6888888888888889}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.6865203761755486, 0.31347962382445144}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.11728395061728394, 0.8827160493827161}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[10] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.08974358974358974, 0.9102564102564102}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7525083612040134, 0.24749163879598662}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[10] <= 654.0) {
                                                            if (input[22] <= 40.5) {
                                                                memcpy(var0, (const double[]){0.25806451612903225, 0.7419354838709677}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.02278481012658228, 0.9772151898734177}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3835616438356164, 0.6164383561643836}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[8] <= 14.0) {
                                                    if (input[26] <= 2176.0) {
                                                        memcpy(var0, (const double[]){0.4041095890410959, 0.5958904109589042}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7169117647058824, 0.28308823529411764}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[10] <= -18.0) {
                                                        memcpy(var0, (const double[]){0.1864406779661017, 0.8135593220338984}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9099616858237548, 0.09003831417624521}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[9] <= 14.0) {
                                    if (input[18] <= 17.5) {
                                        if (input[19] <= 0.5) {
                                            if (input[9] <= 2.0) {
                                                if (input[14] <= -7456.0) {
                                                    memcpy(var0, (const double[]){0.4418604651162791, 0.5581395348837209}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.03714710252600297, 0.962852897473997}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[13] <= 3.0) {
                                                    memcpy(var0, (const double[]){0.07084019769357495, 0.929159802306425}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.33993399339933994, 0.6600660066006601}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[15] <= 14.0) {
                                                if (input[1] <= 3.5) {
                                                    memcpy(var0, (const double[]){0.6151202749140894, 0.3848797250859107}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2647058823529412, 0.7352941176470589}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8324324324324325, 0.16756756756756758}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 17.5) {
                                        if (input[13] <= 3.0) {
                                            if (input[17] <= 18.0) {
                                                if (input[14] <= -14.0) {
                                                    if (input[14] <= -18.0) {
                                                        memcpy(var0, (const double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8888888888888888, 0.1111111111111111}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[9] <= 74.0) {
                                                        memcpy(var0, (const double[]){0.2966360856269113, 0.7033639143730887}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6197183098591549, 0.38028169014084506}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[25] <= 1.0) {
                                                    if (input[20] <= 40.5) {
                                                        memcpy(var0, (const double[]){0.2943116240725474, 0.7056883759274526}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4782608695652174, 0.5217391304347826}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.13380281690140844, 0.8661971830985915}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[19] <= 0.5) {
                                                if (input[9] <= 62.0) {
                                                    if (input[11] <= -6.0) {
                                                        memcpy(var0, (const double[]){0.07692307692307693, 0.9230769230769231}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7941176470588235, 0.20588235294117646}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 3.5) {
                                                        if (input[16] <= 412.0) {
                                                            if (input[14] <= 392.0) {
                                                                memcpy(var0, (const double[]){0.8612632347572107, 0.13873676524278933}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6822429906542056, 0.3177570093457944}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= -248.0) {
                                                            memcpy(var0, (const double[]){0.868421052631579, 0.13157894736842105}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5692640692640693, 0.43073593073593075}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9140592407175636, 0.08594075928243639}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[25] <= 1.0) {
                        if (input[19] <= 0.5) {
                            if (input[18] <= 22.5) {
                                if (input[21] <= 13231.5) {
                                    if (input[18] <= 19.5) {
                                        if (input[13] <= 3.0) {
                                            if (input[27] <= 120.0) {
                                                memcpy(var0, (const double[]){0.29147286821705426, 0.7085271317829457}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.14543889845094665, 0.8545611015490534}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= 29.5) {
                                                if (input[21] <= 8036.5) {
                                                    memcpy(var0, (const double[]){0.31886477462437396, 0.6811352253756261}, 2 * sizeof(double));
                                                } else {
                                                    if (input[26] <= 3456.0) {
                                                        memcpy(var0, (const double[]){0.5721649484536082, 0.42783505154639173}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3619631901840491, 0.6380368098159509}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.20279720279720279, 0.7972027972027972}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 21.5) {
                                                memcpy(var0, (const double[]){0.19111816019032513, 0.8088818398096749}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[18] <= 19.5) {
                                        if (input[13] <= 3.0) {
                                            if (input[15] <= 10.0) {
                                                if (input[15] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.1676190476190476, 0.8323809523809523}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 2.0) {
                                                        if (input[14] <= 18.0) {
                                                            if (input[21] <= 35042.5) {
                                                                memcpy(var0, (const double[]){0.417910447761194, 0.582089552238806}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3116883116883117, 0.6883116883116883}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2217391304347826, 0.7782608695652173}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.16104868913857678, 0.8389513108614233}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[15] <= 2.0) {
                                                if (input[15] <= -2.0) {
                                                    if (input[9] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.3927392739273927, 0.6072607260726073}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[20] <= 40.5) {
                                                        if (input[21] <= 40462.0) {
                                                            if (input[20] <= 35.0) {
                                                                memcpy(var0, (const double[]){0.7814285714285715, 0.21857142857142858}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6164021164021164, 0.3835978835978836}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8780889621087314, 0.12191103789126853}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[21] <= 42182.5) {
                                                            if (input[16] <= -58.0) {
                                                                memcpy(var0, (const double[]){0.6428571428571429, 0.35714285714285715}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.378076062639821, 0.6219239373601789}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[16] <= 14.0) {
                                                                if (input[17] <= 12.0) {
                                                                    if (input[10] <= -120.0) {
                                                                        memcpy(var0, (const double[]){0.8604651162790697, 0.13953488372093023}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4900662251655629, 0.5099337748344371}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.872093023255814, 0.12790697674418605}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7831325301204819, 0.21686746987951808}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[9] <= 2.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[8] <= 126.0) {
                                                        memcpy(var0, (const double[]){0.4013377926421405, 0.5986622073578596}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7024793388429752, 0.2975206611570248}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 21.5) {
                                                if (input[0] <= 29.5) {
                                                    if (input[23] <= 3.5) {
                                                        if (input[26] <= 3456.0) {
                                                            if (input[13] <= 3.0) {
                                                                memcpy(var0, (const double[]){0.4121212121212121, 0.5878787878787879}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.735, 0.265}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.32167832167832167, 0.6783216783216783}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.10204081632653061, 0.8979591836734694}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= -6.0) {
                                                        memcpy(var0, (const double[]){0.11983471074380166, 0.8801652892561983}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= 6.0) {
                                                            if (input[2] <= 1.5) {
                                                                memcpy(var0, (const double[]){0.4547677261613692, 0.5452322738386308}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.17045454545454544, 0.8295454545454546}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.1413427561837456, 0.8586572438162544}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 23.5) {
                                    memcpy(var0, (const double[]){0.12439156300703083, 0.8756084369929692}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= 24.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 49.5) {
                                            if (input[18] <= 25.5) {
                                                memcpy(var0, (const double[]){0.1205098493626883, 0.8794901506373117}, 2 * sizeof(double));
                                            } else {
                                                if (input[0] <= 29.5) {
                                                    if (input[18] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 27.5) {
                                                            memcpy(var0, (const double[]){0.12350597609561753, 0.8764940239043825}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 29.5) {
                                                                    memcpy(var0, (const double[]){0.1569767441860465, 0.8430232558139535}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 30.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 31.5) {
                                                                            memcpy(var0, (const double[]){0.1565217391304348, 0.8434782608695652}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[6] <= 24.0) {
                                                                                memcpy(var0, (const double[]){0.4223826714801444, 0.5776173285198556}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[27] <= 132.0) {
                                                            memcpy(var0, (const double[]){0.14308681672025725, 0.8569131832797428}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 20175.0) {
                                                                memcpy(var0, (const double[]){0.2127659574468085, 0.7872340425531915}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4143302180685358, 0.5856697819314641}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9050847457627119, 0.09491525423728814}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 3.5) {
                                if (input[2] <= 2.5) {
                                    if (input[18] <= 22.5) {
                                        if (input[15] <= -2.0) {
                                            if (input[8] <= -110.0) {
                                                memcpy(var0, (const double[]){0.8809523809523809, 0.11904761904761904}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6706948640483383, 0.3293051359516616}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8776575904513242, 0.12234240954867587}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 2176.0) {
                                            memcpy(var0, (const double[]){0.865814696485623, 0.134185303514377}, 2 * sizeof(double));
                                        } else {
                                            if (input[0] <= 34.5) {
                                                memcpy(var0, (const double[]){0.6451612903225806, 0.3548387096774194}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3968253968253968, 0.6031746031746031}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[24] <= 5446.5) {
                                    if (input[4] <= 2248.0) {
                                        if (input[20] <= 24.5) {
                                            memcpy(var0, (const double[]){0.4222222222222222, 0.5777777777777777}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8170974155069582, 0.18290258449304175}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.46153846153846156, 0.5384615384615384}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 34.5) {
                                        memcpy(var0, (const double[]){0.6836027713625866, 0.3163972286374134}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5030581039755352, 0.4969418960244648}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[18] <= 47.5) {
                            if (input[18] <= 39.5) {
                                if (input[19] <= 0.5) {
                                    memcpy(var0, (const double[]){0.09561542525092445, 0.9043845747490755}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.23255813953488372, 0.7674418604651163}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.3300970873786408, 0.6699029126213593}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.8238636363636364, 0.17613636363636365}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[18] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[19] <= 0.5) {
                        if (input[25] <= 1.0) {
                            if (input[18] <= 22.5) {
                                if (input[17] <= -2.0) {
                                    if (input[18] <= 21.5) {
                                        if (input[18] <= 17.5) {
                                            if (input[15] <= -14.0) {
                                                if (input[7] <= 48.0) {
                                                    memcpy(var0, (const double[]){0.2183206106870229, 0.7816793893129771}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4461538461538462, 0.5538461538461539}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[9] <= 62.0) {
                                                    memcpy(var0, (const double[]){0.022136953955135773, 0.9778630460448642}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.14670846394984327, 0.8532915360501567}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[21] <= 16139.0) {
                                                            memcpy(var0, (const double[]){0.15060240963855423, 0.8493975903614458}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.397196261682243, 0.602803738317757}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[13] <= 10.0) {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.23782234957020057, 0.7621776504297995}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.28679245283018867, 0.7132075471698113}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.0691072095629436, 0.9308927904370564}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 12.0) {
                                                                memcpy(var0, (const double[]){0.2664015904572565, 0.7335984095427436}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06806661839246922, 0.9319333816075308}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 17.5) {
                                        if (input[11] <= -62.0) {
                                            if (input[11] <= -130.0) {
                                                memcpy(var0, (const double[]){0.2792642140468227, 0.7207357859531772}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 66.0) {
                                                    if (input[2] <= 1.5) {
                                                        if (input[16] <= -322.0) {
                                                            memcpy(var0, (const double[]){0.275, 0.725}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[4] <= 2500.0) {
                                                                if (input[13] <= 20.0) {
                                                                    if (input[10] <= -304.0) {
                                                                        memcpy(var0, (const double[]){0.7604562737642585, 0.23954372623574144}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[17] <= 8.0) {
                                                                            memcpy(var0, (const double[]){0.5992779783393501, 0.4007220216606498}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2753623188405797, 0.7246376811594203}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3829787234042553, 0.6170212765957447}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.273972602739726, 0.726027397260274}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.28421052631578947, 0.7157894736842105}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.15306122448979592, 0.8469387755102041}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 2.0) {
                                                if (input[23] <= 0.5) {
                                                    if (input[16] <= 2.0) {
                                                        if (input[22] <= 1.5) {
                                                            if (input[16] <= -2.0) {
                                                                if (input[14] <= 60.0) {
                                                                    if (input[14] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.20833333333333334, 0.7916666666666666}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.014660493827160493, 0.9853395061728395}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[10] <= -8.0) {
                                                                        if (input[16] <= -66.0) {
                                                                            memcpy(var0, (const double[]){0.11396011396011396, 0.886039886039886}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4263565891472868, 0.5736434108527132}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8846153846153846, 0.11538461538461539}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[23] <= -0.5) {
                                                                    memcpy(var0, (const double[]){0.5162790697674419, 0.48372093023255813}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[22] <= -0.5) {
                                                                        memcpy(var0, (const double[]){0.6363636363636364, 0.36363636363636365}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[22] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.12296983758700696, 0.877030162412993}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.34782608695652173, 0.6521739130434783}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[10] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.11428571428571428, 0.8857142857142857}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6490683229813664, 0.35093167701863354}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[10] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.27346938775510204, 0.726530612244898}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.07086614173228346, 0.9291338582677166}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[11] <= 62.0) {
                                                        if (input[16] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.14652567975830816, 0.8534743202416919}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[10] <= 2.0) {
                                                                if (input[26] <= 3456.0) {
                                                                    memcpy(var0, (const double[]){0.6344827586206897, 0.36551724137931035}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.14344262295081966, 0.8565573770491803}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 3.5) {
                                                            if (input[16] <= 378.0) {
                                                                memcpy(var0, (const double[]){0.46099290780141844, 0.5390070921985816}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7471264367816092, 0.25287356321839083}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.30952380952380953, 0.6904761904761905}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[9] <= 14.0) {
                                                    if (input[9] <= -62.0) {
                                                        if (input[13] <= 12.0) {
                                                            if (input[17] <= 68.0) {
                                                                if (input[11] <= 120.0) {
                                                                    memcpy(var0, (const double[]){0.16633663366336635, 0.8336633663366336}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5740740740740741, 0.42592592592592593}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06227106227106227, 0.9377289377289377}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.38164251207729466, 0.6183574879227053}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.021258503401360544, 0.9787414965986394}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.20585365853658535, 0.7941463414634147}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= 10.0) {
                                                if (input[18] <= 19.5) {
                                                    if (input[15] <= -2.0) {
                                                        if (input[14] <= -672.0) {
                                                            memcpy(var0, (const double[]){0.47126436781609193, 0.5287356321839081}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.13786008230452676, 0.8621399176954733}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 2.0) {
                                                            if (input[14] <= -2.0) {
                                                                if (input[8] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.3744394618834081, 0.625560538116592}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[5] <= 524.0) {
                                                                    if (input[17] <= 28.0) {
                                                                        memcpy(var0, (const double[]){0.6982097186700768, 0.30179028132992325}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2916666666666667, 0.7083333333333334}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[8] <= 2.0) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.29015544041450775, 0.7098445595854922}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.24279835390946503, 0.757201646090535}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    if (input[13] <= 13.5) {
                                                        if (input[18] <= 19.5) {
                                                            if (input[11] <= -58.0) {
                                                                memcpy(var0, (const double[]){0.2620689655172414, 0.7379310344827587}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0638419696535929, 0.9361580303464071}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 20.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[13] <= 12.0) {
                                                                    if (input[15] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.11855670103092783, 0.8814432989690721}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[26] <= 3456.0) {
                                                                            memcpy(var0, (const double[]){0.40057636887608067, 0.5994236311239193}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.17293233082706766, 0.8270676691729323}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.03660220994475138, 0.9633977900552486}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[9] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.11471861471861472, 0.8852813852813853}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 20.5) {
                                                                memcpy(var0, (const double[]){0.29055441478439425, 0.7094455852156057}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.17584097859327216, 0.8241590214067278}, 2 * sizeof(double));
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
                            } else {
                                if (input[26] <= 3456.0) {
                                    if (input[14] <= 2.0) {
                                        if (input[20] <= 35.0) {
                                            if (input[21] <= 10304.5) {
                                                memcpy(var0, (const double[]){0.14388489208633093, 0.8561151079136691}, 2 * sizeof(double));
                                            } else {
                                                if (input[13] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= 40.0) {
                                                        if (input[18] <= 47.5) {
                                                            if (input[13] <= 38.0) {
                                                                if (input[18] <= 45.5) {
                                                                    if (input[13] <= 36.0) {
                                                                        if (input[18] <= 43.5) {
                                                                            if (input[13] <= 34.0) {
                                                                                if (input[18] <= 41.5) {
                                                                                    memcpy(var0, (const double[]){0.2791111111111111, 0.7208888888888889}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.034482758620689655, 0.9655172413793104}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7755102040816326, 0.22448979591836735}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.010752688172043012, 0.989247311827957}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8913043478260869, 0.10869565217391304}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7321428571428571, 0.26785714285714285}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.16142557651991615, 0.8385744234800838}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 41.5) {
                                                if (input[13] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.2725118483412322, 0.7274881516587678}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.14006514657980457, 0.8599348534201955}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[13] <= 34.0) {
                                                    memcpy(var0, (const double[]){0.5921787709497207, 0.40782122905027934}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 43.5) {
                                                        memcpy(var0, (const double[]){0.011494252873563218, 0.9885057471264368}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= 36.0) {
                                                            memcpy(var0, (const double[]){0.8641975308641975, 0.13580246913580246}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 45.5) {
                                                                memcpy(var0, (const double[]){0.039568345323741004, 0.960431654676259}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2767039674465921, 0.7232960325534079}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[13] <= 14.0) {
                                            if (input[16] <= 14.0) {
                                                memcpy(var0, (const double[]){0.17413793103448275, 0.8258620689655173}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.08652792990142388, 0.9134720700985761}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[16] <= 3424.0) {
                                        memcpy(var0, (const double[]){0.07881028398588473, 0.9211897160141153}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.292817679558011, 0.7071823204419889}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 18.5) {
                                if (input[18] <= 17.5) {
                                    memcpy(var0, (const double[]){0.0915032679738562, 0.9084967320261438}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[13] <= 10.0) {
                                    memcpy(var0, (const double[]){0.12406947890818859, 0.8759305210918115}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.035122374253227985, 0.964877625746772}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[25] <= 1.0) {
                            if (input[1] <= 3.5) {
                                if (input[2] <= 1.5) {
                                    if (input[14] <= -494.0) {
                                        if (input[18] <= 18.5) {
                                            if (input[20] <= 28.5) {
                                                memcpy(var0, (const double[]){0.34146341463414637, 0.6585365853658537}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8934531450577664, 0.10654685494223363}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= 12.0) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.5314685314685315, 0.46853146853146854}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8697478991596639, 0.13025210084033614}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5503875968992248, 0.4496124031007752}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 18.5) {
                                            if (input[18] <= 17.5) {
                                                if (input[24] <= 13524.0) {
                                                    if (input[16] <= 2.0) {
                                                        memcpy(var0, (const double[]){0.7215815485996705, 0.2784184514003295}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5184135977337111, 0.48158640226628896}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= -2.0) {
                                                        if (input[15] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.42084942084942084, 0.5791505791505791}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.10052910052910052, 0.8994708994708994}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[13] <= 10.0) {
                                                            if (input[24] <= 46469.5) {
                                                                if (input[0] <= 34.5) {
                                                                    memcpy(var0, (const double[]){0.46291959406713507, 0.537080405932865}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6628959276018099, 0.33710407239819007}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.41330166270783847, 0.5866983372921615}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6654867256637168, 0.3345132743362832}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[11] <= 750.0) {
                                                if (input[18] <= 19.5) {
                                                    if (input[24] <= 13601.5) {
                                                        memcpy(var0, (const double[]){0.5117370892018779, 0.48826291079812206}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[26] <= 2176.0) {
                                                            memcpy(var0, (const double[]){0.2019650655021834, 0.7980349344978166}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 10.0) {
                                                                memcpy(var0, (const double[]){0.46842105263157896, 0.531578947368421}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2493150684931507, 0.7506849315068493}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 43.5) {
                                                            if (input[13] <= 10.0) {
                                                                if (input[24] <= 26319.5) {
                                                                    memcpy(var0, (const double[]){0.7336244541484717, 0.2663755458515284}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4698275862068966, 0.5301724137931034}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 21.5) {
                                                                    if (input[21] <= 44255.5) {
                                                                        memcpy(var0, (const double[]){0.3351063829787234, 0.6648936170212766}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14107883817427386, 0.8589211618257261}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 22.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 23.5) {
                                                                            memcpy(var0, (const double[]){0.18095238095238095, 0.819047619047619}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 24.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[4] <= 1720.0) {
                                                                                    memcpy(var0, (const double[]){0.45220030349013657, 0.5477996965098634}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.29453681710213775, 0.7054631828978623}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8167539267015707, 0.18324607329842932}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[14] <= 516.0) {
                                        if (input[2] <= 2.5) {
                                            if (input[24] <= 6896.0) {
                                                memcpy(var0, (const double[]){0.5137254901960784, 0.48627450980392156}, 2 * sizeof(double));
                                            } else {
                                                if (input[26] <= 3456.0) {
                                                    if (input[18] <= 31.5) {
                                                        if (input[5] <= 840.0) {
                                                            memcpy(var0, (const double[]){0.2642669007901668, 0.7357330992098332}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.66, 0.34}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6702127659574468, 0.32978723404255317}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.12025316455696203, 0.879746835443038}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.13303769401330376, 0.8669623059866962}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.7551020408163265, 0.24489795918367346}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[24] <= 3105.5) {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){0.7012448132780082, 0.2987551867219917}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.504424778761062, 0.49557522123893805}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[21] <= 11238.5) {
                                        if (input[0] <= 29.5) {
                                            if (input[8] <= -440.0) {
                                                memcpy(var0, (const double[]){0.5257731958762887, 0.4742268041237113}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3323308270676692, 0.6676691729323309}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5802469135802469, 0.41975308641975306}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[10] <= -952.0) {
                                            memcpy(var0, (const double[]){0.4581818181818182, 0.5418181818181819}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= -2.0) {
                                                if (input[9] <= -14.0) {
                                                    memcpy(var0, (const double[]){0.31115107913669066, 0.6888489208633094}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.1489071038251366, 0.8510928961748634}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= -2.0) {
                                                    if (input[21] <= 19793.0) {
                                                        memcpy(var0, (const double[]){0.3224043715846995, 0.6775956284153005}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.14507772020725387, 0.8549222797927462}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.3553276861346411, 0.644672313865359}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 45.5) {
                                if (input[25] <= 6.5) {
                                    if (input[20] <= 40.5) {
                                        memcpy(var0, (const double[]){0.16955223880597015, 0.8304477611940299}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0895784543325527, 0.9104215456674473}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.3360323886639676, 0.6639676113360324}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.4666666666666667, 0.5333333333333333}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[25] <= 1.0) {
                if (input[18] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[13] <= 8.0) {
                        if (input[18] <= 17.5) {
                            if (input[13] <= 3.0) {
                                if (input[14] <= 2.0) {
                                    if (input[14] <= -2.0) {
                                        memcpy(var0, (const double[]){0.02367175170962651, 0.9763282482903735}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= 2.0) {
                                            if (input[15] <= -2.0) {
                                                memcpy(var0, (const double[]){0.015789473684210527, 0.9842105263157894}, 2 * sizeof(double));
                                            } else {
                                                if (input[27] <= 120.0) {
                                                    memcpy(var0, (const double[]){0.35714285714285715, 0.6428571428571429}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.737012987012987, 0.262987012987013}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.022727272727272728, 0.9772727272727273}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.017866129843985907, 0.982133870156014}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.011283685118810567, 0.9887163148811894}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[12] <= 10.5) {
                                if (input[18] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[19] <= 0.5) {
                                        if (input[18] <= 19.5) {
                                            if (input[13] <= 3.0) {
                                                memcpy(var0, (const double[]){0.09740684244933537, 0.9025931575506646}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 2.0) {
                                                    if (input[17] <= -2.0) {
                                                        if (input[11] <= -62.0) {
                                                            memcpy(var0, (const double[]){0.4432773109243697, 0.5567226890756303}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12825278810408922, 0.8717472118959108}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[9] <= -2.0) {
                                                            if (input[15] <= -14.0) {
                                                                memcpy(var0, (const double[]){0.58984375, 0.41015625}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.11739130434782609, 0.8826086956521739}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[6] <= 24.0) {
                                                                if (input[7] <= 48.0) {
                                                                    memcpy(var0, (const double[]){0.42143906020558003, 0.57856093979442}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6078431372549019, 0.39215686274509803}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5904211395540875, 0.40957886044591246}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[11] <= 60.0) {
                                                        memcpy(var0, (const double[]){0.1430745814307458, 0.8569254185692542}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[10] <= 692.0) {
                                                            memcpy(var0, (const double[]){0.31443298969072164, 0.6855670103092784}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6390977443609023, 0.3609022556390977}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 47.5) {
                                                    if (input[6] <= 48.0) {
                                                        if (input[7] <= 48.0) {
                                                            if (input[20] <= 34.5) {
                                                                if (input[21] <= 6607.0) {
                                                                    memcpy(var0, (const double[]){0.21939275220372184, 0.7806072477962782}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 21.5) {
                                                                        memcpy(var0, (const double[]){0.2585551330798479, 0.7414448669201521}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 22.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 23.5) {
                                                                                memcpy(var0, (const double[]){0.21262458471760798, 0.7873754152823921}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 24.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 25.5) {
                                                                                        memcpy(var0, (const double[]){0.14473684210526316, 0.8552631578947368}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[24] <= 8709.0) {
                                                                                            memcpy(var0, (const double[]){0.29375, 0.70625}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.5964285714285714, 0.4035714285714286}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[24] <= 24261.0) {
                                                                    if (input[10] <= 122.0) {
                                                                        memcpy(var0, (const double[]){0.14585834333733494, 0.8541416566626651}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.45161290322580644, 0.5483870967741935}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[0] <= 34.5) {
                                                                        memcpy(var0, (const double[]){0.4151624548736462, 0.5848375451263538}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.18235294117647058, 0.8176470588235294}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[0] <= 29.5) {
                                                                memcpy(var0, (const double[]){0.5755813953488372, 0.42441860465116277}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.3564356435643564, 0.6435643564356436}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[0] <= 34.5) {
                                                            if (input[18] <= 21.5) {
                                                                if (input[13] <= 3.0) {
                                                                    memcpy(var0, (const double[]){0.24375, 0.75625}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6322869955156951, 0.36771300448430494}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.5936599423631124, 0.40634005763688763}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= -36.0) {
                                                                memcpy(var0, (const double[]){0.6976744186046512, 0.3023255813953488}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2761904761904762, 0.7238095238095238}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.865546218487395, 0.13445378151260504}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[2] <= 1.5) {
                                            if (input[18] <= 19.5) {
                                                if (input[10] <= 520.0) {
                                                    if (input[13] <= 3.0) {
                                                        memcpy(var0, (const double[]){0.1610738255033557, 0.8389261744966443}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[24] <= 35606.0) {
                                                            if (input[1] <= 3.5) {
                                                                if (input[20] <= 40.5) {
                                                                    if (input[24] <= 14607.5) {
                                                                        memcpy(var0, (const double[]){0.7294685990338164, 0.27053140096618356}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[26] <= 3456.0) {
                                                                            memcpy(var0, (const double[]){0.44047619047619047, 0.5595238095238095}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7741935483870968, 0.22580645161290322}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7841584158415842, 0.21584158415841584}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[21] <= 8170.5) {
                                                                    memcpy(var0, (const double[]){0.7787610619469026, 0.22123893805309736}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3759213759213759, 0.6240786240786241}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[4] <= 1200.0) {
                                                                memcpy(var0, (const double[]){0.3657243816254417, 0.6342756183745583}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6028368794326241, 0.3971631205673759}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9031413612565445, 0.0968586387434555}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 3.5) {
                                                    if (input[13] <= 3.0) {
                                                        memcpy(var0, (const double[]){0.6324786324786325, 0.36752136752136755}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8599071207430341, 0.14009287925696595}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 34.5) {
                                                            memcpy(var0, (const double[]){0.6079136690647482, 0.3920863309352518}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3781094527363184, 0.6218905472636815}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[11] <= -76.0) {
                                                memcpy(var0, (const double[]){0.8444444444444444, 0.15555555555555556}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3598360655737705, 0.6401639344262295}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[18] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[19] <= 0.5) {
                                        if (input[27] <= 132.0) {
                                            if (input[21] <= 24335.0) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.00802407221664995, 0.9919759277833501}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 12.0) {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 3.0) {
                                                                if (input[24] <= 7824.5) {
                                                                    memcpy(var0, (const double[]){0.0831758034026465, 0.9168241965973535}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[0] <= 24.5) {
                                                                        memcpy(var0, (const double[]){0.39864864864864863, 0.6013513513513513}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.1708185053380783, 0.8291814946619217}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){0.33122362869198313, 0.6687763713080169}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.20683760683760682, 0.7931623931623931}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.014969085584119753, 0.9850309144158802}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 14.0) {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){0.2314148681055156, 0.7685851318944844}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.10429447852760736, 0.8957055214723927}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        memcpy(var0, (const double[]){0.004478827361563518, 0.9955211726384365}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[12] <= 16.0) {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){0.25636363636363635, 0.7436363636363637}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.12455516014234876, 0.8754448398576512}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 25.5) {
                                                                                memcpy(var0, (const double[]){0.012467532467532468, 0.9875324675324675}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[12] <= 18.0) {
                                                                                    if (input[18] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){0.27877237851662406, 0.7212276214833759}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.10356731875719218, 0.8964326812428078}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[18] <= 29.5) {
                                                                                        memcpy(var0, (const double[]){0.04045469742561016, 0.9595453025743899}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[12] <= 22.0) {
                                                                                            if (input[18] <= 32.5) {
                                                                                                memcpy(var0, (const double[]){0.3322884012539185, 0.6677115987460815}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.10737704918032787, 0.8926229508196721}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[20] <= 34.5) {
                                                                                                memcpy(var0, (const double[]){0.10949773863365865, 0.8905022613663414}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.06128726928537624, 0.9387127307146238}, 2 * sizeof(double));
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
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.011846001974333662, 0.9881539980256664}, 2 * sizeof(double));
                                                } else {
                                                    if (input[0] <= 34.5) {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[12] <= 12.0) {
                                                                if (input[1] <= 2.5) {
                                                                    memcpy(var0, (const double[]){0.4867469879518072, 0.5132530120481927}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[16] <= -132.0) {
                                                                        memcpy(var0, (const double[]){0.15428571428571428, 0.8457142857142858}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3732876712328767, 0.6267123287671232}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[13] <= 6.5) {
                                                                    if (input[24] <= 53530.0) {
                                                                        memcpy(var0, (const double[]){0.23529411764705882, 0.7647058823529411}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3564189189189189, 0.643581081081081}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 21.5) {
                                                                        memcpy(var0, (const double[]){0.016420361247947456, 0.9835796387520526}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[12] <= 14.0) {
                                                                            memcpy(var0, (const double[]){0.37962962962962965, 0.6203703703703703}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[14] <= 2.0) {
                                                                                if (input[14] <= -2.0) {
                                                                                    memcpy(var0, (const double[]){0.12459016393442623, 0.8754098360655738}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[26] <= 2176.0) {
                                                                                        memcpy(var0, (const double[]){0.7681818181818182, 0.2318181818181818}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.11160714285714286, 0.8883928571428571}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.10192973775358734, 0.8980702622464126}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[12] <= 12.0) {
                                                            if (input[13] <= 3.0) {
                                                                memcpy(var0, (const double[]){0.11071428571428571, 0.8892857142857142}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2914285714285714, 0.7085714285714285}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[20] <= 41.5) {
                                                                memcpy(var0, (const double[]){0.13977272727272727, 0.8602272727272727}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.057714070162202945, 0.942285929837797}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.032169370360186966, 0.967830629639813}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        if (input[12] <= 12.5) {
                                                            memcpy(var0, (const double[]){0.09905660377358491, 0.9009433962264151}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.02737226277372263, 0.9726277372262774}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 23.5) {
                                                                if (input[12] <= 14.5) {
                                                                    memcpy(var0, (const double[]){0.11454239191465469, 0.8854576080853453}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.02874493927125506, 0.9712550607287449}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 25.5) {
                                                                        if (input[12] <= 16.5) {
                                                                            memcpy(var0, (const double[]){0.10988372093023256, 0.8901162790697674}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.02966507177033493, 0.970334928229665}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[12] <= 18.5) {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 27.5) {
                                                                                    memcpy(var0, (const double[]){0.1184593023255814, 0.8815406976744186}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[24] <= 21824.0) {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 29.5) {
                                                                                                memcpy(var0, (const double[]){0.09306930693069307, 0.906930693069307}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 30.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 31.5) {
                                                                                                        memcpy(var0, (const double[]){0.07766990291262135, 0.9223300970873787}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.3599562363238512, 0.6400437636761488}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[0] <= 34.5) {
                                                                                                if (input[18] <= 29.5) {
                                                                                                    memcpy(var0, (const double[]){0.19230769230769232, 0.8076923076923077}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[5] <= 776.0) {
                                                                                                        memcpy(var0, (const double[]){0.7510460251046025, 0.2489539748953975}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.4636363636363636, 0.5363636363636364}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[20] <= 44.0) {
                                                                                                    memcpy(var0, (const double[]){0.4128787878787879, 0.5871212121212122}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 27.5) {
                                                                                    memcpy(var0, (const double[]){0.030287474332648872, 0.9697125256673511}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[21] <= 25954.5) {
                                                                                            if (input[7] <= 24.0) {
                                                                                                if (input[20] <= 33.0) {
                                                                                                    if (input[21] <= 10326.5) {
                                                                                                        memcpy(var0, (const double[]){0.1499290276792051, 0.8500709723207949}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.2749551703526599, 0.7250448296473401}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.10704163941574013, 0.8929583605842598}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[20] <= 28.5) {
                                                                                                    if (input[6] <= 24.0) {
                                                                                                        memcpy(var0, (const double[]){0.2817371937639198, 0.7182628062360802}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.41551939924906134, 0.5844806007509387}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[6] <= 48.0) {
                                                                                                        memcpy(var0, (const double[]){0.15704323570432357, 0.8429567642956765}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.4041666666666667, 0.5958333333333333}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[20] <= 33.0) {
                                                                                                if (input[21] <= 161302.0) {
                                                                                                    if (input[20] <= 22.5) {
                                                                                                        memcpy(var0, (const double[]){0.5780141843971631, 0.4219858156028369}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.38059135708870356, 0.6194086429112965}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.1780821917808219, 0.821917808219178}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[20] <= 44.0) {
                                                                                                    if (input[12] <= 31.5) {
                                                                                                        memcpy(var0, (const double[]){0.29772329246935203, 0.702276707530648}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.18521816562778273, 0.8147818343722173}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.0058823529411764705, 0.9941176470588236}, 2 * sizeof(double));
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
                                        if (input[18] <= 19.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 12.0) {
                                                if (input[13] <= 3.0) {
                                                    if (input[18] <= 35.5) {
                                                        memcpy(var0, (const double[]){0.22672064777327935, 0.7732793522267206}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6097560975609756, 0.3902439024390244}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[8] <= -14.0) {
                                                            if (input[16] <= 432.0) {
                                                                if (input[9] <= 14.0) {
                                                                    memcpy(var0, (const double[]){0.5346534653465347, 0.46534653465346537}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7948051948051948, 0.2051948051948052}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9052631578947369, 0.09473684210526316}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= 46.0) {
                                                                if (input[6] <= 48.0) {
                                                                    memcpy(var0, (const double[]){0.3274725274725275, 0.6725274725274726}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.608, 0.392}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6343873517786561, 0.36561264822134387}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= 3.0) {
                                                            if (input[18] <= 39.5) {
                                                                memcpy(var0, (const double[]){0.12441314553990611, 0.8755868544600939}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2128, 0.7872}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 14.0) {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){0.6400862068965517, 0.3599137931034483}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3602015113350126, 0.6397984886649875}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[8] <= 330.0) {
                                                                                if (input[8] <= -206.0) {
                                                                                    if (input[24] <= 6510.5) {
                                                                                        memcpy(var0, (const double[]){0.5933333333333334, 0.4066666666666667}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.38041733547351525, 0.6195826645264848}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[12] <= 16.0) {
                                                                                        if (input[18] <= 26.5) {
                                                                                            memcpy(var0, (const double[]){0.5608465608465608, 0.43915343915343913}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.2638888888888889, 0.7361111111111112}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 25.5) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[12] <= 18.0) {
                                                                                                memcpy(var0, (const double[]){0.3986013986013986, 0.6013986013986014}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[9] <= -554.0) {
                                                                                                    memcpy(var0, (const double[]){0.4295774647887324, 0.5704225352112676}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.1899488926746167, 0.8100511073253833}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[24] <= 10156.0) {
                                                                                    if (input[26] <= 2176.0) {
                                                                                        memcpy(var0, (const double[]){0.7657657657657657, 0.23423423423423423}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5067264573991032, 0.49327354260089684}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[10] <= -360.0) {
                                                                                        memcpy(var0, (const double[]){0.21705426356589147, 0.7829457364341085}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.45601436265709155, 0.5439856373429084}, 2 * sizeof(double));
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
                        if (input[19] <= 0.5) {
                            if (input[20] <= 44.0) {
                                if (input[21] <= 25286.5) {
                                    if (input[20] <= 33.0) {
                                        if (input[21] <= 10749.5) {
                                            if (input[24] <= 6343.5) {
                                                memcpy(var0, (const double[]){0.045249056447264735, 0.9547509435527353}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.08233163181294254, 0.9176683681870574}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[9] <= 58.0) {
                                                if (input[16] <= 18.0) {
                                                    if (input[15] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.11880424300867888, 0.8811957569913211}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.1326025459688826, 0.8673974540311173}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[15] <= 2.0) {
                                                                if (input[26] <= 3456.0) {
                                                                    if (input[16] <= 2.0) {
                                                                        if (input[14] <= 2.0) {
                                                                            if (input[22] <= -2.5) {
                                                                                memcpy(var0, (const double[]){0.9280575539568345, 0.07194244604316546}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6068702290076335, 0.3931297709923664}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.13333333333333333, 0.8666666666666667}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.15172413793103448, 0.8482758620689655}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1757188498402556, 0.8242811501597445}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.12274959083469722, 0.8772504091653028}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.10587824873539159, 0.8941217512646084}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.09742740703005603, 0.902572592969944}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[21] <= 13885.5) {
                                            memcpy(var0, (const double[]){0.029767941299290102, 0.9702320587007099}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 37.0) {
                                                memcpy(var0, (const double[]){0.07752206264059526, 0.9224779373594048}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.042106420404573436, 0.9578935795954265}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[20] <= 35.5) {
                                        if (input[24] <= 26215.0) {
                                            if (input[18] <= 17.5) {
                                                memcpy(var0, (const double[]){0.024024024024024024, 0.975975975975976}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.13676318510858324, 0.8632368148914168}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= 2.0) {
                                                        if (input[15] <= 2.0) {
                                                            if (input[15] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.17410714285714285, 0.8258928571428571}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[26] <= 3456.0) {
                                                                    memcpy(var0, (const double[]){0.8158844765342961, 0.18411552346570398}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12830188679245283, 0.8716981132075472}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1440225035161744, 0.8559774964838256}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 17.5) {
                                                memcpy(var0, (const double[]){0.01606425702811245, 0.9839357429718876}, 2 * sizeof(double));
                                            } else {
                                                if (input[6] <= 96.0) {
                                                    if (input[21] <= 35834.5) {
                                                        memcpy(var0, (const double[]){0.16414970453053185, 0.8358502954694682}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.23994126284875184, 0.7600587371512482}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.37117903930131, 0.62882096069869}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[24] <= 61078.0) {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.043066729768102226, 0.9569332702318978}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[24] <= 29906.0) {
                                                        if (input[26] <= 1408.0) {
                                                            memcpy(var0, (const double[]){0.14853195164075994, 0.8514680483592401}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.07936507936507936, 0.9206349206349206}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.08343976160068114, 0.9165602383993189}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.13581714889681595, 0.864182851103184}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[24] <= 316830.5) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.0862533692722372, 0.9137466307277629}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 10.0) {
                                                        memcpy(var0, (const double[]){0.2967581047381546, 0.7032418952618454}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1827433628318584, 0.8172566371681416}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.38717339667458434, 0.6128266033254157}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.005600528259434078, 0.994399471740566}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 34.5) {
                                if (input[18] <= 19.5) {
                                    if (input[14] <= -522.0) {
                                        if (input[18] <= 17.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 18.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 10.0) {
                                                    if (input[5] <= 1124.0) {
                                                        memcpy(var0, (const double[]){0.2731707317073171, 0.7268292682926829}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5327868852459017, 0.4672131147540984}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 18.5) {
                                            if (input[18] <= 17.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[12] <= 10.0) {
                                                if (input[8] <= 398.0) {
                                                    if (input[26] <= 3456.0) {
                                                        memcpy(var0, (const double[]){0.05193635544881417, 0.9480636445511859}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1523809523809524, 0.8476190476190476}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[18] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[12] <= 10.0) {
                                            if (input[13] <= 10.0) {
                                                if (input[7] <= 24.0) {
                                                    if (input[6] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.29636711281070743, 0.7036328871892925}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.412751677852349, 0.587248322147651}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6480446927374302, 0.35195530726256985}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[6] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.5072727272727273, 0.49272727272727274}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= -6.0) {
                                                            memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7217391304347827, 0.2782608695652174}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.11311787072243346, 0.8868821292775665}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= 48.0) {
                                                            if (input[18] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.13370473537604458, 0.8662952646239555}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 47.5) {
                                                                        if (input[2] <= 1.5) {
                                                                            memcpy(var0, (const double[]){0.2522590361445783, 0.7477409638554217}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.14225941422594143, 0.8577405857740585}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5795454545454546, 0.42045454545454547}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[13] <= 12.0) {
                                                                memcpy(var0, (const double[]){0.5098039215686274, 0.49019607843137253}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.13013698630136986, 0.8698630136986302}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.38010204081632654, 0.6198979591836735}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[2] <= 1.5) {
                                                if (input[20] <= 30.5) {
                                                    if (input[21] <= 15414.5) {
                                                        if (input[13] <= 12.0) {
                                                            if (input[18] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.14245548266166824, 0.8575445173383318}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.27504105090311987, 0.7249589490968801}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.1448087431693989, 0.855191256830601}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            if (input[8] <= -514.0) {
                                                                memcpy(var0, (const double[]){0.42592592592592593, 0.5740740740740741}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.12838427947598252, 0.8716157205240175}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 12.0) {
                                                                    if (input[13] <= 12.0) {
                                                                        memcpy(var0, (const double[]){0.6293706293706294, 0.3706293706293706}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.16216216216216217, 0.8378378378378378}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.43891402714932126, 0.5610859728506787}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 27.5) {
                                                                        memcpy(var0, (const double[]){0.16236559139784945, 0.8376344086021505}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 28.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[24] <= 9949.0) {
                                                                                memcpy(var0, (const double[]){0.12956810631229235, 0.8704318936877077}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[12] <= 16.0) {
                                                                                    if (input[13] <= 14.0) {
                                                                                        if (input[18] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.38271604938271603, 0.6172839506172839}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.6190476190476191, 0.38095238095238093}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 31.5) {
                                                                                            memcpy(var0, (const double[]){0.20531400966183574, 0.7946859903381642}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.40371621621621623, 0.5962837837837838}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[21] <= 18162.5) {
                                                                                        memcpy(var0, (const double[]){0.35011185682326623, 0.6498881431767338}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 3.5) {
                                                                                            memcpy(var0, (const double[]){0.2786471479050984, 0.7213528520949015}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.16568627450980392, 0.8343137254901961}, 2 * sizeof(double));
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
                                                    if (input[21] <= 63074.5) {
                                                        if (input[18] <= 23.5) {
                                                            if (input[18] <= 22.5) {
                                                                if (input[18] <= 21.5) {
                                                                    memcpy(var0, (const double[]){0.07070020394289599, 0.929299796057104}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06807990216061965, 0.9319200978393803}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[13] <= 12.0) {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 25.5) {
                                                                        if (input[12] <= 12.0) {
                                                                            memcpy(var0, (const double[]){0.2821576763485477, 0.7178423236514523}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.04229607250755287, 0.9577039274924471}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 27.5) {
                                                                                memcpy(var0, (const double[]){0.13095238095238096, 0.8690476190476191}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.24262492474413005, 0.75737507525587}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[12] <= 38.0) {
                                                                        if (input[18] <= 31.5) {
                                                                            memcpy(var0, (const double[]){0.10432871153195807, 0.8956712884680419}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= 14.0) {
                                                                                if (input[13] <= 18.0) {
                                                                                    memcpy(var0, (const double[]){0.3902439024390244, 0.6097560975609756}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.20969560315670802, 0.790304396843292}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 32.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= 26887.0) {
                                                                                        memcpy(var0, (const double[]){0.12681522283425137, 0.8731847771657486}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 35.5) {
                                                                                            memcpy(var0, (const double[]){0.08865710560625815, 0.9113428943937418}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.19590268886043533, 0.8040973111395646}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.06364617044228695, 0.9363538295577131}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[26] <= 3456.0) {
                                                            if (input[23] <= -0.5) {
                                                                if (input[0] <= 29.5) {
                                                                    memcpy(var0, (const double[]){0.21384615384615385, 0.7861538461538462}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.09780621572212066, 0.9021937842778793}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.3133208255159475, 0.6866791744840526}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1953307392996109, 0.8046692607003891}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[6] <= 96.0) {
                                                                memcpy(var0, (const double[]){0.2773044151820294, 0.7226955848179706}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.4326241134751773, 0.5673758865248227}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 23.5) {
                                                    memcpy(var0, (const double[]){0.055699962866691426, 0.9443000371333086}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= 10.0) {
                                                            if (input[18] <= 35.5) {
                                                                memcpy(var0, (const double[]){0.15648286140089418, 0.8435171385991058}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.37714285714285717, 0.6228571428571429}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[20] <= 33.0) {
                                                                memcpy(var0, (const double[]){0.1339299490819318, 0.8660700509180682}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.09186702285544672, 0.9081329771445533}, 2 * sizeof(double));
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
                                    if (input[21] <= 127890.0) {
                                        memcpy(var0, (const double[]){0.15875216637781628, 0.8412478336221837}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.30835734870317005, 0.69164265129683}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[18] <= 22.5) {
                                        if (input[18] <= 21.5) {
                                            if (input[16] <= 488.0) {
                                                if (input[18] <= 17.5) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 18.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.08859595340282035, 0.9114040465971797}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.35294117647058826, 0.6470588235294118}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 18386.5) {
                                            memcpy(var0, (const double[]){0.10760667903525047, 0.8923933209647495}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.04034725681349178, 0.9596527431865082}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[18] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[20] <= 44.0) {
                        if (input[24] <= 29946.5) {
                            if (input[18] <= 17.5) {
                                memcpy(var0, (const double[]){0.002277904328018223, 0.9977220956719818}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[13] <= 8.0) {
                                        if (input[12] <= 9.5) {
                                            if (input[13] <= 3.0) {
                                                if (input[18] <= 43.5) {
                                                    memcpy(var0, (const double[]){0.03698534542916958, 0.9630146545708305}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.76, 0.24}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    if (input[1] <= 3.5) {
                                                        memcpy(var0, (const double[]){0.5053003533568905, 0.49469964664310956}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.21991701244813278, 0.7800829875518672}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.07407407407407407, 0.9259259259259259}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.0014540167211922936, 0.9985459832788077}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[0] <= 29.5) {
                                                        if (input[18] <= 45.5) {
                                                            memcpy(var0, (const double[]){0.05699629524080935, 0.9430037047591906}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[12] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.49206349206349204, 0.5079365079365079}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.07788778877887789, 0.9221122112211221}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.03666064438422162, 0.9633393556157783}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.03191730833027779, 0.9680826916697222}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[27] <= 132.0) {
                                if (input[21] <= 62846.5) {
                                    memcpy(var0, (const double[]){0.05515933232169955, 0.9448406676783004}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.0902008520998174, 0.9097991479001826}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[18] <= 51.5) {
                                    if (input[18] <= 31.5) {
                                        if (input[21] <= 0.5) {
                                            memcpy(var0, (const double[]){0.19, 0.81}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.056010568031704094, 0.9439894319682959}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 32.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 15.5) {
                                                if (input[13] <= 3.0) {
                                                    memcpy(var0, (const double[]){0.5852272727272727, 0.4147727272727273}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.11386138613861387, 0.8861386138613861}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.10197826692672053, 0.8980217330732795}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[12] <= 18.0) {
                                        memcpy(var0, (const double[]){0.7396226415094339, 0.26037735849056604}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 52.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[21] <= 149582.0) {
                                                memcpy(var0, (const double[]){0.12148028962188254, 0.8785197103781175}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.4019607843137255, 0.5980392156862745}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.008472300945675845, 0.9915276990543241}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
