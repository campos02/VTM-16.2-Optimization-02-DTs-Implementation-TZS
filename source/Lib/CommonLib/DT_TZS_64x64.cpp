//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs no TZS

#include "DT_TZS_64x64.h"

#include <string.h>
void DT_TZS_64x64::score(double * input, double * output) {
    double var0[2];
    if (input[19] <= 2.5) {
        if (input[17] <= 12.5) {
            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[6] <= 0.5) {
                if (input[21] <= 32637.5) {
                    if (input[0] <= 24.5) {
                        if (input[21] <= 6544.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 34.5) {
                                memcpy(var0, (const double[]){0.05253940455341506, 0.9474605954465849}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0004123711340206186, 0.9995876288659794}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 1.0) {
                        if (input[20] <= 33.0) {
                            if (input[13] <= -2.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[21] <= 58068.0) {
                                    memcpy(var0, (const double[]){0.5277777777777778, 0.4722222222222222}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9552238805970149, 0.04477611940298507}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[11] <= 14.0) {
                                memcpy(var0, (const double[]){0.003952569169960474, 0.9960474308300395}, 2 * sizeof(double));
                            } else {
                                if (input[15] <= 2.0) {
                                    if (input[15] <= -2.0) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9523809523809523, 0.047619047619047616}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[11] <= 14.0) {
                            memcpy(var0, (const double[]){0.0003604253018561903, 0.9996395746981438}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){0.88, 0.12}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.01486988847583643, 0.9851301115241635}, 2 * sizeof(double));
                            }
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
                            if (input[19] <= 6.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 14.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[13] <= -2.0) {
                                    if (input[7] <= -12.0) {
                                        if (input[14] <= -528.0) {
                                            memcpy(var0, (const double[]){0.9949238578680203, 0.005076142131979695}, 2 * sizeof(double));
                                        } else {
                                            if (input[14] <= -376.0) {
                                                if (input[8] <= -352.0) {
                                                    memcpy(var0, (const double[]){0.5319148936170213, 0.46808510638297873}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.022068965517241378, 0.9779310344827586}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[5] <= 1120.0) {
                                                    if (input[6] <= 2.5) {
                                                        if (input[23] <= 13.5) {
                                                            if (input[20] <= 26.0) {
                                                                if (input[3] <= 1.0) {
                                                                    memcpy(var0, (const double[]){0.46392896781354054, 0.5360710321864595}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.27388535031847133, 0.7261146496815286}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5273109243697479, 0.4726890756302521}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9433962264150944, 0.05660377358490566}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09954751131221719, 0.9004524886877828}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[20] <= 37.5) {
                                                        if (input[22] <= -26.5) {
                                                            if (input[22] <= -268.5) {
                                                                memcpy(var0, (const double[]){0.5581395348837209, 0.4418604651162791}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9473684210526315, 0.05263157894736842}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4375, 0.5625}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8871391076115486, 0.11286089238845144}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.07346938775510205, 0.926530612244898}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[13] <= 2.0) {
                                        if (input[14] <= 2.0) {
                                            if (input[14] <= -2.0) {
                                                if (input[8] <= -28.0) {
                                                    memcpy(var0, (const double[]){0.8235294117647058, 0.17647058823529413}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.08737864077669903, 0.912621359223301}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[8] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= 2.0) {
                                                        if (input[15] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.9995928338762216, 0.00040716612377850165}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.625, 0.375}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[23] <= 8.0) {
                                                memcpy(var0, (const double[]){0.07504078303425775, 0.9249592169657422}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9876543209876543, 0.012345679012345678}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[7] <= 12.0) {
                                            memcpy(var0, (const double[]){0.06320081549439348, 0.9367991845056065}, 2 * sizeof(double));
                                        } else {
                                            if (input[4] <= 3104.0) {
                                                if (input[22] <= 27.0) {
                                                    memcpy(var0, (const double[]){0.3323262839879154, 0.6676737160120846}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7903225806451613, 0.20967741935483872}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9615384615384616, 0.038461538461538464}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
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
                        if (input[11] <= 7.5) {
                            if (input[19] <= 6.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[13] <= -150.0) {
                                if (input[6] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.18495899493980109, 0.8150410050601989}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[12] <= 3.0) {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[5] <= 1696.0) {
                                            memcpy(var0, (const double[]){0.06925031766200762, 0.9307496823379924}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.3006535947712418, 0.6993464052287581}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.001326259946949602, 0.9986737400530504}, 2 * sizeof(double));
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
                        if (input[6] <= 2.5) {
                            if (input[21] <= 8497.5) {
                                if (input[6] <= 0.5) {
                                    if (input[11] <= 6.5) {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 27.5) {
                                            if (input[20] <= 35.0) {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){0.8173913043478261, 0.1826086956521739}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.2111111111111111, 0.7888888888888889}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[13] <= -52.0) {
                                                            memcpy(var0, (const double[]){0.9841269841269841, 0.015873015873015872}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.15436241610738255, 0.8456375838926175}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9586776859504132, 0.04132231404958678}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[17] <= 17.5) {
                                        if (input[9] <= 8.0) {
                                            if (input[16] <= -8.0) {
                                                if (input[5] <= 1504.0) {
                                                    memcpy(var0, (const double[]){0.41304347826086957, 0.5869565217391305}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8314606741573034, 0.16853932584269662}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[16] <= 24.0) {
                                                    if (input[14] <= -24.0) {
                                                        if (input[8] <= -56.0) {
                                                            memcpy(var0, (const double[]){0.9491525423728814, 0.05084745762711865}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 50.5) {
                                                                if (input[13] <= -40.0) {
                                                                    memcpy(var0, (const double[]){0.22018348623853212, 0.7798165137614679}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    memcpy(var0, (const double[]){0.38636363636363635, 0.6136363636363636}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[14] <= 8.0) {
                                                            if (input[13] <= 24.0) {
                                                                if (input[15] <= 8.0) {
                                                                    if (input[15] <= -8.0) {
                                                                        if (input[22] <= -2.5) {
                                                                            memcpy(var0, (const double[]){0.8515950069348127, 0.14840499306518723}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.20630372492836677, 0.7936962750716332}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[13] <= -8.0) {
                                                                            if (input[7] <= -40.0) {
                                                                                memcpy(var0, (const double[]){0.989010989010989, 0.01098901098901099}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[11] <= 6.5) {
                                                                                    memcpy(var0, (const double[]){0.7771428571428571, 0.22285714285714286}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[6] <= 1.5) {
                                                                                        memcpy(var0, (const double[]){0.6101694915254238, 0.3898305084745763}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.06060606060606061, 0.9393939393939394}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 1.5) {
                                                                                memcpy(var0, (const double[]){0.8913857677902621, 0.10861423220973783}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9978632478632479, 0.002136752136752137}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[13] <= -8.0) {
                                                                        memcpy(var0, (const double[]){0.7138964577656676, 0.28610354223433243}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.03614457831325301, 0.963855421686747}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[7] <= 24.0) {
                                                                    if (input[11] <= 6.5) {
                                                                        if (input[6] <= 1.5) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[13] <= 96.0) {
                                                                                memcpy(var0, (const double[]){0.989010989010989, 0.01098901098901099}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.04975124378109453, 0.9502487562189055}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8607594936708861, 0.13924050632911392}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 6.5) {
                                                                if (input[22] <= -12.5) {
                                                                    memcpy(var0, (const double[]){0.3283582089552239, 0.6716417910447762}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7929292929292929, 0.20707070707070707}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2846153846153846, 0.7153846153846154}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[8] <= 8.0) {
                                                        memcpy(var0, (const double[]){0.24806201550387597, 0.751937984496124}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.49295774647887325, 0.5070422535211268}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 35.0) {
                                                memcpy(var0, (const double[]){0.8136272545090181, 0.18637274549098196}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 352.0) {
                                                    memcpy(var0, (const double[]){0.8707482993197279, 0.1292517006802721}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9926470588235294, 0.007352941176470588}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 34.5) {
                                                if (input[23] <= 2.5) {
                                                    memcpy(var0, (const double[]){0.6529235382308846, 0.34707646176911544}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4175824175824176, 0.5824175824175825}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[13] <= 8.0) {
                                                    if (input[18] <= 0.5) {
                                                        if (input[21] <= 5535.5) {
                                                            if (input[17] <= 19.5) {
                                                                memcpy(var0, (const double[]){0.7047308319738989, 0.29526916802610115}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 20.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7923809523809524, 0.20761904761904762}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9227373068432672, 0.0772626931567329}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6005830903790087, 0.39941690962099125}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6481751824817519, 0.3518248175182482}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[15] <= -2.0) {
                                    if (input[17] <= 17.5) {
                                        if (input[1] <= 1.5) {
                                            if (input[9] <= -2.0) {
                                                memcpy(var0, (const double[]){0.8492462311557789, 0.1507537688442211}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 608.0) {
                                                    memcpy(var0, (const double[]){0.3262411347517731, 0.6737588652482269}, 2 * sizeof(double));
                                                } else {
                                                    if (input[20] <= 39.0) {
                                                        memcpy(var0, (const double[]){0.31693989071038253, 0.6830601092896175}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8058252427184466, 0.1941747572815534}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[16] <= -328.0) {
                                                if (input[4] <= 992.0) {
                                                    memcpy(var0, (const double[]){0.7352941176470589, 0.2647058823529412}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[7] <= 14.0) {
                                                    if (input[7] <= -104.0) {
                                                        if (input[20] <= 37.0) {
                                                            memcpy(var0, (const double[]){0.5650224215246636, 0.4349775784753363}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8489388264669163, 0.15106117353308365}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 2.0) {
                                                            if (input[14] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.35071090047393366, 0.6492890995260664}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6833493743984601, 0.31665062560153995}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[21] <= 19204.0) {
                                                                memcpy(var0, (const double[]){0.2290748898678414, 0.7709251101321586}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.68, 0.32}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8666666666666667, 0.13333333333333333}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[17] <= 19.5) {
                                                if (input[16] <= 2.0) {
                                                    if (input[5] <= 352.0) {
                                                        memcpy(var0, (const double[]){0.6227544910179641, 0.3772455089820359}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.860125260960334, 0.13987473903966596}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5122615803814714, 0.4877384196185286}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= -250.0) {
                                                        memcpy(var0, (const double[]){0.6146341463414634, 0.3853658536585366}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.69164265129683, 0.30835734870317005}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8607594936708861, 0.13924050632911392}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[14] <= -2.0) {
                                        if (input[9] <= 88.0) {
                                            if (input[17] <= 17.5) {
                                                if (input[8] <= -20.0) {
                                                    if (input[16] <= -8.0) {
                                                        memcpy(var0, (const double[]){0.6530612244897959, 0.3469387755102041}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[2] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.9085173501577287, 0.0914826498422713}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6984126984126984, 0.30158730158730157}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 0.5) {
                                                        if (input[8] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.4050632911392405, 0.5949367088607594}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.09282700421940929, 0.9071729957805907}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[13] <= -40.0) {
                                                            memcpy(var0, (const double[]){0.9049180327868852, 0.09508196721311475}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.606508875739645, 0.39349112426035504}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.5660377358490566, 0.4339622641509434}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.6274509803921569, 0.37254901960784315}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9432989690721649, 0.05670103092783505}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9838056680161943, 0.016194331983805668}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[23] <= -1.5) {
                                                    if (input[5] <= 608.0) {
                                                        memcpy(var0, (const double[]){0.8518518518518519, 0.14814814814814814}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9702315325248071, 0.029768467475192944}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 17.5) {
                                                        if (input[14] <= 10.0) {
                                                            if (input[18] <= 0.5) {
                                                                if (input[16] <= -40.0) {
                                                                    memcpy(var0, (const double[]){0.5535714285714286, 0.44642857142857145}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.08527131782945736, 0.9147286821705426}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7465437788018433, 0.2534562211981567}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7936507936507936, 0.20634920634920634}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 14.0) {
                                                            if (input[18] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.9658703071672355, 0.034129692832764506}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7796610169491526, 0.22033898305084745}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7259786476868327, 0.27402135231316727}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    if (input[14] <= 14.0) {
                                                        if (input[13] <= 2.0) {
                                                            if (input[13] <= -2.0) {
                                                                if (input[7] <= -24.0) {
                                                                    memcpy(var0, (const double[]){0.9952830188679245, 0.0047169811320754715}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 17.5) {
                                                                        memcpy(var0, (const double[]){0.3870967741935484, 0.6129032258064516}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9659442724458205, 0.034055727554179564}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[6] <= 1.5) {
                                                                    if (input[17] <= 18.5) {
                                                                        if (input[1] <= 1.5) {
                                                                            memcpy(var0, (const double[]){0.9550870760769936, 0.044912923923006415}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9927322280263456, 0.0072677719736543266}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8671140939597315, 0.13288590604026845}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.9993725400718727, 0.0006274599281273173}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.969187675070028, 0.03081232492997199}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 17.5) {
                                                                if (input[7] <= 2.0) {
                                                                    memcpy(var0, (const double[]){0.20481927710843373, 0.7951807228915663}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.89171974522293, 0.10828025477707007}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9855072463768116, 0.014492753623188406}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[17] <= 17.5) {
                                                            if (input[18] <= 0.5) {
                                                                if (input[8] <= 8.0) {
                                                                    memcpy(var0, (const double[]){0.10404624277456648, 0.8959537572254336}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.803347280334728, 0.19665271966527198}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9801980198019802, 0.019801980198019802}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9371816638370118, 0.06281833616298811}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[9] <= 6.0) {
                                                        if (input[15] <= 50.0) {
                                                            if (input[17] <= 17.5) {
                                                                if (input[13] <= -14.0) {
                                                                    memcpy(var0, (const double[]){0.703030303030303, 0.296969696969697}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.25384615384615383, 0.7461538461538462}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8439024390243902, 0.15609756097560976}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 1.5) {
                                                                if (input[17] <= 17.5) {
                                                                    memcpy(var0, (const double[]){0.5229357798165137, 0.47706422018348627}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8813559322033898, 0.11864406779661017}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.8964181994191674, 0.10358180058083252}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 1.5) {
                                                            memcpy(var0, (const double[]){0.921875, 0.078125}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9807247494217425, 0.01927525057825752}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 17.5) {
                                                if (input[18] <= 0.5) {
                                                    if (input[23] <= 2.5) {
                                                        memcpy(var0, (const double[]){0.29085872576177285, 0.7091412742382271}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= 2128.0) {
                                                            if (input[5] <= 992.0) {
                                                                memcpy(var0, (const double[]){0.7572815533980582, 0.24271844660194175}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.34951456310679613, 0.6504854368932039}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9389179755671903, 0.06108202443280977}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[17] <= 18.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 3.0) {
                                                        memcpy(var0, (const double[]){0.7785365853658537, 0.22146341463414634}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.9431818181818182, 0.056818181818181816}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 17.5) {
                                if (input[11] <= 6.5) {
                                    if (input[22] <= -0.5) {
                                        memcpy(var0, (const double[]){0.128, 0.872}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.4375, 0.5625}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.034358047016274866, 0.9656419529837251}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 19.5) {
                                        if (input[20] <= 35.5) {
                                            memcpy(var0, (const double[]){0.31343283582089554, 0.6865671641791045}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0392156862745098, 0.9607843137254902}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 20.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[20] <= 28.5) {
                                                memcpy(var0, (const double[]){0.6959247648902821, 0.30407523510971785}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.39661016949152544, 0.6033898305084746}, 2 * sizeof(double));
                                            }
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
                                    if (input[13] <= -12.0) {
                                        if (input[16] <= -356.0) {
                                            memcpy(var0, (const double[]){0.7085714285714285, 0.2914285714285714}, 2 * sizeof(double));
                                        } else {
                                            if (input[7] <= -28.0) {
                                                if (input[14] <= -348.0) {
                                                    if (input[8] <= -340.0) {
                                                        memcpy(var0, (const double[]){0.4485981308411215, 0.5514018691588785}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09836065573770492, 0.9016393442622951}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.4201954397394137, 0.5798045602605864}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.11688311688311688, 0.8831168831168831}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[13] <= 4.0) {
                                            memcpy(var0, (const double[]){0.6848816029143898, 0.3151183970856102}, 2 * sizeof(double));
                                        } else {
                                            if (input[7] <= 252.0) {
                                                memcpy(var0, (const double[]){0.3712574850299401, 0.6287425149700598}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7176470588235294, 0.2823529411764706}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[11] <= 9.5) {
                                    if (input[12] <= 3.0) {
                                        if (input[18] <= 0.5) {
                                            memcpy(var0, (const double[]){0.048333943610399124, 0.9516660563896009}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0005011275369581559, 0.9994988724630418}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[6] <= 0.5) {
                                        memcpy(var0, (const double[]){0.0034782608695652175, 0.9965217391304347}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= -844.0) {
                                            memcpy(var0, (const double[]){0.2502369668246445, 0.7497630331753554}, 2 * sizeof(double));
                                        } else {
                                            if (input[12] <= 3.0) {
                                                memcpy(var0, (const double[]){0.13379669852302345, 0.8662033014769766}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 18.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 19.5) {
                                    if (input[11] <= 10.5) {
                                        if (input[12] <= 3.0) {
                                            if (input[6] <= 0.5) {
                                                if (input[21] <= 6097.0) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.208130081300813, 0.791869918699187}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[21] <= 3253.0) {
                                                    if (input[2] <= 0.5) {
                                                        if (input[0] <= 29.5) {
                                                            memcpy(var0, (const double[]){0.3188405797101449, 0.6811594202898551}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5254777070063694, 0.4745222929936306}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5327138985675571, 0.46728610143244287}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[4] <= 1760.0) {
                                                        if (input[11] <= 8.5) {
                                                            memcpy(var0, (const double[]){0.6923076923076923, 0.3076923076923077}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[21] <= 127896.0) {
                                                                memcpy(var0, (const double[]){0.26346863468634685, 0.7365313653136532}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6590909090909091, 0.3409090909090909}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[21] <= 37135.5) {
                                                            memcpy(var0, (const double[]){0.8461538461538461, 0.15384615384615385}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.466403162055336, 0.5335968379446641}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[6] <= 2.5) {
                                                if (input[5] <= 1184.0) {
                                                    if (input[15] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.4661016949152542, 0.5338983050847458}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[6] <= 1.5) {
                                                            if (input[15] <= 72.0) {
                                                                memcpy(var0, (const double[]){0.5994277539341917, 0.4005722460658083}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8042203985932005, 0.19577960140679954}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.9767441860465116, 0.023255813953488372}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.18072289156626506, 0.8192771084337349}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[12] <= 3.0) {
                                            if (input[6] <= 0.5) {
                                                if (input[21] <= 7440.5) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.10606060606060606, 0.8939393939393939}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[13] <= -4244.0) {
                                                    memcpy(var0, (const double[]){0.3741721854304636, 0.6258278145695364}, 2 * sizeof(double));
                                                } else {
                                                    if (input[11] <= 11.5) {
                                                        memcpy(var0, (const double[]){0.0472972972972973, 0.9527027027027027}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[6] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.1377388535031847, 0.8622611464968153}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2886297376093295, 0.7113702623906706}, 2 * sizeof(double));
                                                        }
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
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 4673.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.38798283261802574, 0.6120171673819742}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[12] <= 3.0) {
                                                        if (input[21] <= 2709.0) {
                                                            if (input[4] <= 1376.0) {
                                                                memcpy(var0, (const double[]){0.5902777777777778, 0.4097222222222222}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= 60.0) {
                                                                    memcpy(var0, (const double[]){0.4984066284257489, 0.5015933715742511}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 26.0) {
                                                                        memcpy(var0, (const double[]){0.10837438423645321, 0.8916256157635468}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.3883495145631068, 0.6116504854368932}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[21] <= 14997.0) {
                                                                if (input[20] <= 28.5) {
                                                                    memcpy(var0, (const double[]){0.3412526997840173, 0.6587473002159827}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.12100840336134454, 0.8789915966386554}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[11] <= 11.5) {
                                                                    memcpy(var0, (const double[]){0.3767830791933104, 0.6232169208066897}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6838709677419355, 0.3161290322580645}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 2.5) {
                                                            if (input[3] <= 1.0) {
                                                                memcpy(var0, (const double[]){0.5780346820809249, 0.42196531791907516}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7880386983289358, 0.2119613016710642}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.26732673267326734, 0.7326732673267327}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[6] <= 0.5) {
                                                    if (input[21] <= 9709.5) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[13] <= -4252.0) {
                                                        memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 13.5) {
                                                            memcpy(var0, (const double[]){0.03642384105960265, 0.9635761589403974}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.18791946308724833, 0.8120805369127517}, 2 * sizeof(double));
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
                                                            if (input[21] <= 2030.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[11] <= 10.0) {
                                                                    memcpy(var0, (const double[]){0.5577889447236181, 0.44221105527638194}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.275092936802974, 0.724907063197026}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[11] <= 11.5) {
                                                                if (input[11] <= 10.5) {
                                                                    memcpy(var0, (const double[]){0.48666303756124113, 0.5133369624387588}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[12] <= 3.0) {
                                                                        if (input[18] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.29763560500695413, 0.7023643949930459}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.1206896551724138, 0.8793103448275862}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6015625, 0.3984375}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5452793834296724, 0.45472061657032753}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[6] <= 0.5) {
                                                            if (input[21] <= 7258.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.13445378151260504, 0.865546218487395}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.17490805067429505, 0.825091949325705}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[7] <= -1974.0) {
                                                            if (input[7] <= -5932.0) {
                                                                if (input[15] <= -160.0) {
                                                                    if (input[15] <= -584.0) {
                                                                        if (input[15] <= -1556.0) {
                                                                            if (input[16] <= -1888.0) {
                                                                                memcpy(var0, (const double[]){0.9800796812749004, 0.0199203187250996}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9027058146229131, 0.09729418537708694}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9903288201160542, 0.009671179883945842}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[5] <= 672.0) {
                                                                            memcpy(var0, (const double[]){0.8615384615384616, 0.13846153846153847}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.03636363636363636, 0.9636363636363636}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[5] <= 992.0) {
                                                                        memcpy(var0, (const double[]){0.990185387131952, 0.009814612868047983}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[23] <= 224.5) {
                                                                            memcpy(var0, (const double[]){0.974169741697417, 0.025830258302583026}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.6285714285714286, 0.37142857142857144}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[4] <= 416.0) {
                                                                    if (input[11] <= 21.5) {
                                                                        if (input[16] <= -944.0) {
                                                                            memcpy(var0, (const double[]){0.9942196531791907, 0.005780346820809248}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                memcpy(var0, (const double[]){0.30303030303030304, 0.696969696969697}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8032786885245902, 0.19672131147540983}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[4] <= 224.0) {
                                                                            if (input[16] <= 20.0) {
                                                                                if (input[14] <= -444.0) {
                                                                                    memcpy(var0, (const double[]){0.9958127141225733, 0.004187285877426722}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.9667624128026262, 0.03323758719737382}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.7228915662650602, 0.27710843373493976}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[5] <= 224.0) {
                                                                                if (input[8] <= 612.0) {
                                                                                    memcpy(var0, (const double[]){0.9891808346213292, 0.010819165378670788}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.8222996515679443, 0.17770034843205576}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 2.5) {
                                                                        if (input[15] <= -546.0) {
                                                                            if (input[17] <= 25.5) {
                                                                                if (input[6] <= 0.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6153846153846154, 0.38461538461538464}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[17] <= 27.5) {
                                                                                        if (input[6] <= 0.5) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[11] <= 19.0) {
                                                                                                memcpy(var0, (const double[]){0.8148148148148148, 0.18518518518518517}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.09090909090909091, 0.9090909090909091}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[17] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[17] <= 29.5) {
                                                                                                memcpy(var0, (const double[]){0.3235294117647059, 0.6764705882352942}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.814348036839554, 0.18565196316044597}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[15] <= -348.0) {
                                                                                if (input[5] <= 800.0) {
                                                                                    if (input[16] <= 44.0) {
                                                                                        memcpy(var0, (const double[]){0.27419354838709675, 0.7258064516129032}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.027079303675048357, 0.9729206963249516}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.7213114754098361, 0.2786885245901639}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[20] <= 33.5) {
                                                                                    if (input[16] <= -56.0) {
                                                                                        memcpy(var0, (const double[]){0.855072463768116, 0.14492753623188406}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[5] <= 224.0) {
                                                                                            if (input[8] <= -960.0) {
                                                                                                memcpy(var0, (const double[]){0.9534883720930233, 0.046511627906976744}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.5425531914893617, 0.4574468085106383}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[5] <= 800.0) {
                                                                                                if (input[5] <= 352.0) {
                                                                                                    memcpy(var0, (const double[]){0.40310077519379844, 0.5968992248062015}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.062111801242236024, 0.937888198757764}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[4] <= 1120.0) {
                                                                                                    if (input[0] <= 24.5) {
                                                                                                        memcpy(var0, (const double[]){0.07317073170731707, 0.926829268292683}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.4674329501915709, 0.5325670498084292}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[15] <= -2.0) {
                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[8] <= 1838.0) {
                                                                                                            memcpy(var0, (const double[]){0.6018518518518519, 0.39814814814814814}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.9635036496350365, 0.0364963503649635}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[21] <= 31196.5) {
                                                                                        if (input[4] <= 1440.0) {
                                                                                            memcpy(var0, (const double[]){0.9721706864564007, 0.027829313543599257}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.47540983606557374, 0.5245901639344263}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[21] <= 57450.5) {
                                                                            if (input[17] <= 25.5) {
                                                                                memcpy(var0, (const double[]){0.5909090909090909, 0.4090909090909091}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.9242479159115622, 0.07575208408843784}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.15384615384615385, 0.8461538461538461}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[17] <= 25.5) {
                                                                if (input[11] <= 16.5) {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 3364.5) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[11] <= 12.0) {
                                                                                memcpy(var0, (const double[]){0.5364120781527532, 0.4635879218472469}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.3108108108108108, 0.6891891891891891}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 15.5) {
                                                                            memcpy(var0, (const double[]){0.42278617710583155, 0.5772138228941684}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[13] <= -52.0) {
                                                                                memcpy(var0, (const double[]){0.5364647713226205, 0.4635352286773795}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.7533980582524272, 0.24660194174757283}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[6] <= 0.5) {
                                                                        if (input[21] <= 8450.0) {
                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2413793103448276, 0.7586206896551724}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[11] <= 18.5) {
                                                                            memcpy(var0, (const double[]){0.1245366938472943, 0.8754633061527057}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.2670157068062827, 0.7329842931937173}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[17] <= 26.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 27.5) {
                                                                        if (input[11] <= 18.5) {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[21] <= 4298.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.4482758620689655, 0.5517241379310345}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[11] <= 16.5) {
                                                                                    if (input[18] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.451067615658363, 0.548932384341637}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 12.0) {
                                                                                            memcpy(var0, (const double[]){0.47058823529411764, 0.5294117647058824}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.13227513227513227, 0.8677248677248677}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6534351145038167, 0.3465648854961832}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[6] <= 0.5) {
                                                                                if (input[21] <= 12678.5) {
                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.2777777777777778, 0.7222222222222222}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[11] <= 23.5) {
                                                                                    memcpy(var0, (const double[]){0.1498800959232614, 0.8501199040767387}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.39590443686006827, 0.6040955631399317}, 2 * sizeof(double));
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
                                                                                        if (input[21] <= 3895.5) {
                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[23] <= 0.5) {
                                                                                                memcpy(var0, (const double[]){0.601010101010101, 0.398989898989899}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.2889733840304182, 0.7110266159695817}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[11] <= 17.5) {
                                                                                            memcpy(var0, (const double[]){0.38929440389294406, 0.610705596107056}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[6] <= 1.5) {
                                                                                                memcpy(var0, (const double[]){0.48503937007874015, 0.5149606299212598}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6837606837606838, 0.3162393162393162}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[6] <= 0.5) {
                                                                                        memcpy(var0, (const double[]){0.020356234096692113, 0.9796437659033079}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[11] <= 23.5) {
                                                                                            memcpy(var0, (const double[]){0.1279229711141678, 0.8720770288858322}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.3311546840958606, 0.6688453159041394}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[17] <= 30.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[21] <= 9903.0) {
                                                                                        if (input[17] <= 31.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                if (input[21] <= 1876.0) {
                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[11] <= 22.5) {
                                                                                                    if (input[11] <= 18.5) {
                                                                                                        memcpy(var0, (const double[]){0.391713747645951, 0.608286252354049}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6707152496626181, 0.3292847503373819}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[11] <= 25.0) {
                                                                                                        if (input[15] <= 120.0) {
                                                                                                            memcpy(var0, (const double[]){0.10895660203139428, 0.8910433979686058}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.3624161073825503, 0.6375838926174496}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.3531827515400411, 0.6468172484599589}, 2 * sizeof(double));
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
                                                                                                            if (input[21] <= 6717.0) {
                                                                                                                memcpy(var0, (const double[]){0.004484304932735426, 0.9955156950672646}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.4918032786885246, 0.5081967213114754}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[11] <= 21.5) {
                                                                                                                memcpy(var0, (const double[]){0.4047058823529412, 0.5952941176470589}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.7344461305007587, 0.26555386949924126}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[6] <= 0.5) {
                                                                                                            memcpy(var0, (const double[]){0.005291005291005291, 0.9947089947089947}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[11] <= 27.0) {
                                                                                                                memcpy(var0, (const double[]){0.13673655423883319, 0.8632634457611669}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.34017595307917886, 0.6598240469208211}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 34.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 35.5) {
                                                                                                            if (input[6] <= 0.5) {
                                                                                                                if (input[21] <= 3999.5) {
                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.375, 0.625}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[11] <= 27.0) {
                                                                                                                    if (input[11] <= 21.5) {
                                                                                                                        memcpy(var0, (const double[]){0.3471698113207547, 0.6528301886792452}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[13] <= -2024.0) {
                                                                                                                            memcpy(var0, (const double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[6] <= 1.5) {
                                                                                                                                memcpy(var0, (const double[]){0.6619718309859155, 0.3380281690140845}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.8588807785888077, 0.1411192214111922}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.18025078369905956, 0.8197492163009404}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[17] <= 36.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[17] <= 37.5) {
                                                                                                                    if (input[11] <= 29.0) {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            if (input[21] <= 4236.5) {
                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.4864864864864865, 0.5135135135135135}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 22.5) {
                                                                                                                                memcpy(var0, (const double[]){0.3482587064676617, 0.6517412935323383}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 1.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.6850574712643678, 0.31494252873563217}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.8729446935724963, 0.12705530642750373}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[11] <= 31.0) {
                                                                                                                                memcpy(var0, (const double[]){0.14065510597302505, 0.859344894026975}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.4713375796178344, 0.5286624203821656}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[17] <= 38.5) {
                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[17] <= 39.5) {
                                                                                                                            if (input[11] <= 31.0) {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    if (input[21] <= 2439.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 27.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.3557312252964427, 0.6442687747035574}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.850669412976313, 0.14933058702368693}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 33.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.13280212483399734, 0.8671978751660027}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.4915254237288136, 0.5084745762711864}, 2 * sizeof(double));
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
                                                                                                                                            if (input[21] <= 1466.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[11] <= 29.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.3645320197044335, 0.6354679802955665}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[7] <= 3444.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.9040462427745665, 0.09595375722543352}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[17] <= 42.5) {
                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[17] <= 43.5) {
                                                                                                                                            if (input[11] <= 35.0) {
                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                    if (input[21] <= 2648.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.5263157894736842, 0.47368421052631576}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[11] <= 29.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.3247863247863248, 0.6752136752136753}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[13] <= -2024.0) {
                                                                                                                                                            memcpy(var0, (const double[]){0.2608695652173913, 0.7391304347826086}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[14] <= 4056.0) {
                                                                                                                                                                memcpy(var0, (const double[]){0.9463171036204744, 0.05368289637952559}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.2727272727272727, 0.7272727272727273}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[15] <= -492.0) {
                                                                                                                                                        memcpy(var0, (const double[]){0.45454545454545453, 0.5454545454545454}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, (const double[]){0.1165644171779141, 0.8834355828220859}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[17] <= 44.5) {
                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[17] <= 45.5) {
                                                                                                                                                    if (input[11] <= 37.0) {
                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.06451612903225806, 0.9354838709677419}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            if (input[11] <= 33.0) {
                                                                                                                                                                memcpy(var0, (const double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, (const double[]){0.9513343799058085, 0.04866562009419152}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[6] <= 0.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.12345679012345678, 0.8765432098765432}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[17] <= 46.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[17] <= 47.5) {
                                                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                                                if (input[21] <= 2559.5) {
                                                                                                                                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.9230769230769231, 0.07692307692307693}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[11] <= 39.0) {
                                                                                                                                                                    if (input[11] <= 37.0) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.9826302729528535, 0.017369727047146403}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, (const double[]){0.21052631578947367, 0.7894736842105263}, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[17] <= 48.5) {
                                                                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                if (input[17] <= 49.5) {
                                                                                                                                                                    if (input[11] <= 41.0) {
                                                                                                                                                                        memcpy(var0, (const double[]){0.7154046997389034, 0.2845953002610966}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[17] <= 50.5) {
                                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, (const double[]){0.7256637168141593, 0.2743362831858407}, 2 * sizeof(double));
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
                                                                                        if (input[23] <= -16.5) {
                                                                                            if (input[6] <= 0.5) {
                                                                                                if (input[5] <= 480.0) {
                                                                                                    if (input[21] <= 135572.5) {
                                                                                                        memcpy(var0, (const double[]){0.10397111913357401, 0.896028880866426}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.7692307692307693, 0.23076923076923078}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[21] <= 25527.0) {
                                                                                                        if (input[16] <= -26.0) {
                                                                                                            memcpy(var0, (const double[]){0.921875, 0.078125}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.1951219512195122, 0.8048780487804879}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[17] <= 61.5) {
                                                                                                            memcpy(var0, (const double[]){0.15013404825737264, 0.8498659517426274}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.6451612903225806, 0.3548387096774194}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[6] <= 2.5) {
                                                                                                    if (input[21] <= 23990.5) {
                                                                                                        memcpy(var0, (const double[]){0.35384615384615387, 0.6461538461538462}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[17] <= 39.5) {
                                                                                                            memcpy(var0, (const double[]){0.5006587615283268, 0.4993412384716733}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[17] <= 40.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.655199374511337, 0.344800625488663}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[5] <= 608.0) {
                                                                                                        if (input[21] <= 128168.0) {
                                                                                                            memcpy(var0, (const double[]){0.12247838616714697, 0.877521613832853}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.6944444444444444, 0.3055555555555556}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.49375, 0.50625}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[11] <= 14.0) {
                                                                                                if (input[6] <= 0.5) {
                                                                                                    if (input[16] <= 42.0) {
                                                                                                        if (input[18] <= 0.5) {
                                                                                                            if (input[8] <= 46.0) {
                                                                                                                memcpy(var0, (const double[]){0.9456953642384106, 0.054304635761589407}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.38461538461538464, 0.6153846153846154}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.6900584795321637, 0.30994152046783624}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.5906735751295337, 0.40932642487046633}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5808080808080808, 0.41919191919191917}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[17] <= 31.5) {
                                                                                                    if (input[18] <= 0.5) {
                                                                                                        memcpy(var0, (const double[]){0.35390946502057613, 0.6460905349794238}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.099644128113879, 0.900355871886121}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[17] <= 32.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 0.5) {
                                                                                                            if (input[13] <= -1978.0) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[16] <= 50.0) {
                                                                                                                    if (input[8] <= 42.0) {
                                                                                                                        if (input[14] <= 54.0) {
                                                                                                                            if (input[5] <= 672.0) {
                                                                                                                                if (input[23] <= -0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.6338215712383488, 0.36617842876165113}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[6] <= 0.5) {
                                                                                                                                    memcpy(var0, (const double[]){0.3448275862068966, 0.6551724137931034}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.5809018567639257, 0.41909814323607425}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[16] <= -18.0) {
                                                                                                                            if (input[8] <= 460.0) {
                                                                                                                                memcpy(var0, (const double[]){0.27564102564102566, 0.7243589743589743}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.6813186813186813, 0.31868131868131866}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.5974683544303797, 0.40253164556962023}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[8] <= 6.0) {
                                                                                                                        memcpy(var0, (const double[]){0.28637951105937137, 0.7136204889406287}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[14] <= 6.0) {
                                                                                                                            memcpy(var0, (const double[]){0.9937888198757764, 0.006211180124223602}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[6] <= 0.5) {
                                                                                                                                memcpy(var0, (const double[]){0.27586206896551724, 0.7241379310344828}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.5847953216374269, 0.4152046783625731}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[4] <= 1248.0) {
                                                                                                                if (input[13] <= 34.0) {
                                                                                                                    memcpy(var0, (const double[]){0.4453900709219858, 0.5546099290780142}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.2488619119878604, 0.7511380880121397}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.5279299014238773, 0.4720700985761227}, 2 * sizeof(double));
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
                        if (input[6] <= 2.5) {
                            if (input[5] <= 992.0) {
                                if (input[17] <= 17.5) {
                                    if (input[18] <= 0.5) {
                                        if (input[16] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[10] <= -416.0) {
                                                    memcpy(var0, (const double[]){0.5109489051094891, 0.48905109489051096}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.19148936170212766, 0.8085106382978723}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[15] <= -2.0) {
                                                    if (input[12] <= 10.0) {
                                                        if (input[5] <= 352.0) {
                                                            memcpy(var0, (const double[]){0.010810810810810811, 0.9891891891891892}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.273224043715847, 0.726775956284153}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5357142857142857, 0.4642857142857143}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= 2.0) {
                                                        if (input[6] <= 1.5) {
                                                            memcpy(var0, (const double[]){0.5210084033613446, 0.4789915966386555}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9530685920577617, 0.04693140794223827}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[22] <= 5.5) {
                                                            if (input[7] <= -56.0) {
                                                                memcpy(var0, (const double[]){0.5901639344262295, 0.4098360655737705}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.10457516339869281, 0.8954248366013072}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6515151515151515, 0.3484848484848485}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[13] <= -544.0) {
                                                memcpy(var0, (const double[]){0.723404255319149, 0.2765957446808511}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.14878621769772904, 0.851213782302271}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[6] <= 0.5) {
                                            if (input[0] <= 34.5) {
                                                memcpy(var0, (const double[]){0.34297520661157027, 0.6570247933884298}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[21] <= 28382.5) {
                                                if (input[14] <= -8.0) {
                                                    memcpy(var0, (const double[]){0.4693572496263079, 0.5306427503736921}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6325088339222615, 0.3674911660777385}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.7679144385026738, 0.2320855614973262}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 19.5) {
                                            if (input[18] <= 0.5) {
                                                if (input[12] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.6260162601626016, 0.37398373983739835}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 20.0) {
                                                        memcpy(var0, (const double[]){0.33653846153846156, 0.6634615384615384}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.3420398009950249, 0.6579601990049752}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 21.5) {
                                                    if (input[12] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.530373831775701, 0.4696261682242991}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2752688172043011, 0.7247311827956989}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.38515901060070673, 0.6148409893992933}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 29.5) {
                                                                    memcpy(var0, (const double[]){0.6029654036243822, 0.3970345963756178}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8442906574394463, 0.15570934256055363}, 2 * sizeof(double));
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
                                    memcpy(var0, (const double[]){0.26666666666666666, 0.7333333333333333}, 2 * sizeof(double));
                                } else {
                                    if (input[2] <= 0.5) {
                                        memcpy(var0, (const double[]){0.9439579684763573, 0.05604203152364273}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7397260273972602, 0.2602739726027397}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 0.5) {
                                if (input[20] <= 38.0) {
                                    if (input[17] <= 17.5) {
                                        memcpy(var0, (const double[]){0.06711409395973154, 0.9328859060402684}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 18.5) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4101123595505618, 0.5898876404494382}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.05042016806722689, 0.9495798319327731}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.04308390022675737, 0.9569160997732427}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[20] <= 44.0) {
                    if (input[17] <= 19.5) {
                        if (input[17] <= 16.5) {
                            memcpy(var0, (const double[]){0.9848484848484849, 0.015151515151515152}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 17.5) {
                                memcpy(var0, (const double[]){0.0030349013657056147, 0.9969650986342944}, 2 * sizeof(double));
                            } else {
                                if (input[17] <= 18.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[11] <= 10.0) {
                                        if (input[6] <= 2.5) {
                                            memcpy(var0, (const double[]){0.14636810486073185, 0.8536318951392682}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.035443037974683546, 0.9645569620253165}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 20.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[18] <= 0.5) {
                                if (input[17] <= 21.5) {
                                    if (input[0] <= 24.5) {
                                        memcpy(var0, (const double[]){0.22943722943722944, 0.7705627705627706}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.10175763182238667, 0.8982423681776133}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 22.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[17] <= 23.5) {
                                            if (input[11] <= 12.0) {
                                                if (input[12] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.576036866359447, 0.423963133640553}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.28128724672228844, 0.7187127532777116}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0438871473354232, 0.9561128526645768}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= 25.5) {
                                                    if (input[11] <= 12.0) {
                                                        if (input[12] <= 12.0) {
                                                            memcpy(var0, (const double[]){0.5045871559633027, 0.4954128440366973}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.23503325942350334, 0.7649667405764967}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.167420814479638, 0.832579185520362}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[17] <= 26.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[17] <= 27.5) {
                                                            if (input[11] <= 12.0) {
                                                                memcpy(var0, (const double[]){0.5138888888888888, 0.4861111111111111}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.2518796992481203, 0.7481203007518797}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[17] <= 28.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[17] <= 29.5) {
                                                                    memcpy(var0, (const double[]){0.34960629921259845, 0.6503937007874016}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[17] <= 30.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[20] <= 39.0) {
                                                                            if (input[17] <= 31.5) {
                                                                                memcpy(var0, (const double[]){0.40226628895184136, 0.5977337110481586}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[17] <= 32.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6551440329218107, 0.3448559670781893}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.41825095057034223, 0.5817490494296578}, 2 * sizeof(double));
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
                                if (input[6] <= 2.5) {
                                    if (input[11] <= 10.0) {
                                        if (input[12] <= 10.0) {
                                            if (input[21] <= 8598.5) {
                                                memcpy(var0, (const double[]){0.37272727272727274, 0.6272727272727273}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7399702823179792, 0.2600297176820208}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[17] <= 21.5) {
                                                memcpy(var0, (const double[]){0.23096446700507614, 0.7690355329949239}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.48478015783540024, 0.5152198421645998}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 23.5) {
                                            memcpy(var0, (const double[]){0.1504315659679408, 0.8495684340320592}, 2 * sizeof(double));
                                        } else {
                                            if (input[11] <= 12.0) {
                                                if (input[12] <= 12.0) {
                                                    memcpy(var0, (const double[]){0.6988352745424293, 0.3011647254575707}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 25.5) {
                                                        if (input[17] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.19875776397515527, 0.8012422360248447}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5763546798029556, 0.4236453201970443}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 35.0) {
                                                    if (input[17] <= 27.5) {
                                                        memcpy(var0, (const double[]){0.19343065693430658, 0.8065693430656934}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[12] <= 14.0) {
                                                            memcpy(var0, (const double[]){0.624113475177305, 0.375886524822695}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 31.5) {
                                                                memcpy(var0, (const double[]){0.19875776397515527, 0.8012422360248447}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.46397188049209137, 0.5360281195079086}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[10] <= 184.0) {
                                                            if (input[5] <= 224.0) {
                                                                memcpy(var0, (const double[]){0.2892416225749559, 0.7107583774250441}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.1378917378917379, 0.8621082621082621}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.36678200692041524, 0.6332179930795848}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[12] <= 24.0) {
                                        if (input[11] <= 10.0) {
                                            memcpy(var0, (const double[]){0.18326693227091634, 0.8167330677290837}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.08137044967880086, 0.9186295503211992}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= -24.0) {
                                            memcpy(var0, (const double[]){0.09424083769633508, 0.9057591623036649}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5757575757575758, 0.42424242424242425}, 2 * sizeof(double));
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
                            if (input[21] <= 12020.5) {
                                if (input[17] <= 17.5) {
                                    memcpy(var0, (const double[]){0.03007518796992481, 0.9699248120300752}, 2 * sizeof(double));
                                } else {
                                    if (input[17] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.46362098138747887, 0.5363790186125211}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[19] <= 6.5) {
                                    if (input[18] <= 0.5) {
                                        memcpy(var0, (const double[]){0.02697495183044316, 0.9730250481695568}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= 408.0) {
                                            if (input[13] <= 24.0) {
                                                if (input[2] <= 0.5) {
                                                    if (input[21] <= 31452.0) {
                                                        memcpy(var0, (const double[]){0.2612481857764877, 0.7387518142235123}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09811320754716982, 0.9018867924528302}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.0427807486631016, 0.9572192513368984}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.03421461897356143, 0.9657853810264385}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[14] <= -24.0) {
                                                memcpy(var0, (const double[]){0.5441176470588235, 0.45588235294117646}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.14012738853503184, 0.8598726114649682}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
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
