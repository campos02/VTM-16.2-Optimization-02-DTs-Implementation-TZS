#include <string.h>
#include "DtModel2.h"

void DtModel2::score(double * input, double * output) {
    double var0[2];
    if (input[18] <= 15.5) {
        if (input[18] <= 14.5) {
            if (input[18] <= 12.5) {
                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[18] <= 13.5) {
                    if (input[27] <= 180.0) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.017711695097587212, 0.9822883049024128}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[12] <= 6.5) {
                if (input[14] <= 2.0) {
                    if (input[14] <= -2.0) {
                        if (input[8] <= -2.0) {
                            if (input[26] <= 2176.0) {
                                memcpy(var0, (const double[]){0.9527186761229315, 0.04728132387706856}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.39977220956719817, 0.6002277904328018}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.050445103857566766, 0.9495548961424333}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[15] <= 2.0) {
                            if (input[15] <= -2.0) {
                                memcpy(var0, (const double[]){0.10775047258979206, 0.8922495274102079}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9908363749320493, 0.00916362506795061}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.13478260869565217, 0.8652173913043478}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[8] <= 2.0) {
                        memcpy(var0, (const double[]){0.05650793650793651, 0.9434920634920635}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.4607379375591296, 0.5392620624408704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 3.5) {
                    if (input[2] <= 2.5) {
                        memcpy(var0, (const double[]){0.0033303434752714215, 0.9966696565247286}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.05973767638465842, 0.9402623236153416}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 23003.5) {
                        memcpy(var0, (const double[]){0.016274077919162726, 0.9837259220808373}, 2 * sizeof(double));
                    } else {
                        if (input[14] <= 2.0) {
                            if (input[22] <= -1.5) {
                                if (input[8] <= -2.0) {
                                    memcpy(var0, (const double[]){0.00411522633744856, 0.9958847736625515}, 2 * sizeof(double));
                                } else {
                                    if (input[26] <= 1408.0) {
                                        memcpy(var0, (const double[]){0.04098939929328622, 0.9590106007067137}, 2 * sizeof(double));
                                    } else {
                                        if (input[20] <= 40.5) {
                                            if (input[10] <= -8.0) {
                                                memcpy(var0, (const double[]){0.03333333333333333, 0.9666666666666667}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8081504702194358, 0.19184952978056427}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.15301085883514315, 0.8469891411648569}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 24.5) {
                                    if (input[22] <= 0.5) {
                                        memcpy(var0, (const double[]){0.1346153846153846, 0.8653846153846154}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8065693430656934, 0.19343065693430658}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 37.0) {
                                        if (input[19] <= 0.5) {
                                            if (input[14] <= -2.0) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= 13.5) {
                                                    memcpy(var0, (const double[]){0.1543696981653186, 0.8456303018346814}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6560364464692483, 0.3439635535307517}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.013874991661663665, 0.9861250083383364}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.00013819153346538303, 0.9998618084665346}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[12] <= 7.5) {
            if (input[13] <= 8.5) {
                if (input[18] <= 18.5) {
                    if (input[13] <= 0.5) {
                        if (input[18] <= 17.5) {
                            if (input[18] <= 16.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[14] <= -2.0) {
                                        if (input[8] <= -30.0) {
                                            if (input[20] <= 35.5) {
                                                if (input[16] <= -66.0) {
                                                    if (input[15] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.31134469010511057, 0.6886553098948894}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.5532537167925908, 0.4467462832074092}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3650855365474339, 0.6349144634525661}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.624688899950224, 0.375311100049776}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[26] <= 3456.0) {
                                                    if (input[15] <= -2.0) {
                                                        if (input[17] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.5263157894736842, 0.47368421052631576}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.12359550561797752, 0.8764044943820225}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 2.0) {
                                                            if (input[14] <= -136.0) {
                                                                memcpy(var0, (const double[]){0.5673323092677931, 0.43266769073220684}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= -62.0) {
                                                                    memcpy(var0, (const double[]){0.8741517581739667, 0.12584824182603332}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2631578947368421, 0.7368421052631579}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[9] <= 14.0) {
                                                                memcpy(var0, (const double[]){0.09302325581395349, 0.9069767441860465}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5513767629281396, 0.4486232370718603}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7601378213623111, 0.23986217863768886}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[27] <= 156.0) {
                                                if (input[26] <= 1408.0) {
                                                    memcpy(var0, (const double[]){0.1168091168091168, 0.8831908831908832}, 2 * sizeof(double));
                                                } else {
                                                    if (input[14] <= -14.0) {
                                                        if (input[8] <= -14.0) {
                                                            memcpy(var0, (const double[]){0.9194444444444444, 0.08055555555555556}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5650938032973281, 0.434906196702672}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.306966618287373, 0.693033381712627}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[4] <= 1848.0) {
                                                    memcpy(var0, (const double[]){0.09857743939090363, 0.9014225606090964}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.44936708860759494, 0.5506329113924051}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[15] <= 2.0) {
                                            if (input[16] <= 2.0) {
                                                if (input[15] <= -2.0) {
                                                    if (input[9] <= -14.0) {
                                                        memcpy(var0, (const double[]){0.6603375527426161, 0.339662447257384}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.10606833248342683, 0.8939316675165732}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= -2.0) {
                                                        if (input[27] <= 120.0) {
                                                            if (input[19] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.2101593625498008, 0.7898406374501992}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7407407407407407, 0.25925925925925924}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9445214979195562, 0.05547850208044383}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[17] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.9861970169377264, 0.013802983062273531}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2751798561151079, 0.7248201438848921}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[27] <= 120.0) {
                                                    memcpy(var0, (const double[]){0.2429831595829992, 0.7570168404170008}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7398230088495575, 0.26017699115044246}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[9] <= 14.0) {
                                                memcpy(var0, (const double[]){0.1412639405204461, 0.8587360594795539}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6469750889679715, 0.3530249110320285}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[8] <= 10.0) {
                                        memcpy(var0, (const double[]){0.2149423799041823, 0.7850576200958177}, 2 * sizeof(double));
                                    } else {
                                        if (input[26] <= 3456.0) {
                                            if (input[17] <= 2.0) {
                                                if (input[15] <= -2.0) {
                                                    if (input[9] <= -14.0) {
                                                        memcpy(var0, (const double[]){0.4459016393442623, 0.5540983606557377}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.07492260061919505, 0.9250773993808049}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[15] <= 2.0) {
                                                        if (input[14] <= 62.0) {
                                                            memcpy(var0, (const double[]){0.42788806505620663, 0.5721119349437933}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.1901840490797546, 0.8098159509202454}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= 446.0) {
                                                                    if (input[16] <= 146.0) {
                                                                        if (input[27] <= 120.0) {
                                                                            memcpy(var0, (const double[]){0.8526610644257703, 0.1473389355742297}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[14] <= 82.0) {
                                                                                memcpy(var0, (const double[]){0.8273305084745762, 0.17266949152542374}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[8] <= 94.0) {
                                                                                    memcpy(var0, (const double[]){0.05, 0.95}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[14] <= 146.0) {
                                                                                        memcpy(var0, (const double[]){0.9128630705394191, 0.08713692946058091}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.4632616487455197, 0.5367383512544803}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8086534875046625, 0.19134651249533757}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[16] <= 6.0) {
                                                            memcpy(var0, (const double[]){0.6819787985865724, 0.31802120141342755}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.1264222503160556, 0.8735777496839444}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.07855973813420622, 0.9214402618657938}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3886166603844704, 0.6113833396155296}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6947152385838892, 0.30528476141611083}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[18] <= 16.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[17] <= 2.0) {
                                if (input[17] <= -2.0) {
                                    if (input[11] <= -14.0) {
                                        if (input[19] <= 0.5) {
                                            if (input[17] <= -62.0) {
                                                if (input[16] <= 392.0) {
                                                    memcpy(var0, (const double[]){0.9194341943419434, 0.08056580565805659}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7339805825242719, 0.26601941747572816}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[18] <= 17.5) {
                                                    if (input[26] <= 2176.0) {
                                                        memcpy(var0, (const double[]){0.672463768115942, 0.32753623188405795}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.18341307814992025, 0.8165869218500797}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9528879310344828, 0.04711206896551724}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[19] <= 0.5) {
                                            if (input[9] <= -14.0) {
                                                memcpy(var0, (const double[]){0.7920604914933838, 0.20793950850661624}, 2 * sizeof(double));
                                            } else {
                                                if (input[17] <= -30.0) {
                                                    if (input[26] <= 2176.0) {
                                                        memcpy(var0, (const double[]){0.13793103448275862, 0.8620689655172413}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5593103448275862, 0.4406896551724138}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 17.5) {
                                                        memcpy(var0, (const double[]){0.17328626066490144, 0.8267137393350985}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8633560018978333, 0.13664399810216668}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[15] <= 2.0) {
                                        if (input[16] <= 2.0) {
                                            if (input[16] <= -2.0) {
                                                if (input[16] <= -14.0) {
                                                    if (input[8] <= 46.0) {
                                                        if (input[19] <= 0.5) {
                                                            if (input[16] <= -46.0) {
                                                                if (input[26] <= 1408.0) {
                                                                    memcpy(var0, (const double[]){0.36254295532646047, 0.6374570446735395}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[10] <= 24.0) {
                                                                        if (input[10] <= -24.0) {
                                                                            memcpy(var0, (const double[]){0.8291139240506329, 0.17088607594936708}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4144144144144144, 0.5855855855855856}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9473161033797217, 0.05268389662027833}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 17.5) {
                                                                    memcpy(var0, (const double[]){0.06905210295040803, 0.9309478970495919}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[8] <= 38.0) {
                                                                memcpy(var0, (const double[]){0.957226320951853, 0.042773679048147044}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[14] <= 34.0) {
                                                                    memcpy(var0, (const double[]){0.11960132890365449, 0.8803986710963455}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[14] <= 46.0) {
                                                                        memcpy(var0, (const double[]){0.9198369565217391, 0.08016304347826086}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.22028985507246376, 0.7797101449275362}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.96260589723842, 0.03739410276157993}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[19] <= 0.5) {
                                                        if (input[8] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.6907216494845361, 0.30927835051546393}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.06489292667099286, 0.9351070733290071}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8140394088669951, 0.18596059113300492}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[14] <= 2.0) {
                                                    if (input[15] <= -2.0) {
                                                        if (input[18] <= 17.5) {
                                                            if (input[9] <= -14.0) {
                                                                memcpy(var0, (const double[]){0.9364471669218989, 0.06355283307810107}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[19] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.07430997876857749, 0.9256900212314225}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8797653958944281, 0.12023460410557185}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= -2.0) {
                                                            if (input[18] <= 17.5) {
                                                                if (input[8] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.9428, 0.0572}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[19] <= 0.5) {
                                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5644444444444444, 0.43555555555555553}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9827199040686, 0.017280095931399998}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 17.5) {
                                                        if (input[8] <= 2.0) {
                                                            if (input[19] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.781021897810219, 0.21897810218978103}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[8] <= 14.0) {
                                                                if (input[14] <= 6.0) {
                                                                    memcpy(var0, (const double[]){0.8268292682926829, 0.17317073170731706}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.15165876777251186, 0.8483412322274881}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9401169590643275, 0.05988304093567252}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[8] <= -2.0) {
                                                if (input[10] <= 62.0) {
                                                    if (input[10] <= 50.0) {
                                                        memcpy(var0, (const double[]){0.9338852477865931, 0.06611475221340692}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[20] <= 43.5) {
                                                            if (input[14] <= -50.0) {
                                                                if (input[19] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.41385135135135137, 0.5861486486486487}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[14] <= -62.0) {
                                                                        memcpy(var0, (const double[]){0.13725490196078433, 0.8627450980392157}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9261538461538461, 0.07384615384615385}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.1641025641025641, 0.8358974358974359}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[9] <= 56.0) {
                                                        if (input[15] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.8, 0.2}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9577900154554867, 0.0422099845445133}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.27411167512690354, 0.7258883248730964}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 17.5) {
                                                    if (input[26] <= 1408.0) {
                                                        if (input[19] <= 0.5) {
                                                            if (input[10] <= 2.0) {
                                                                memcpy(var0, (const double[]){0.08855799373040753, 0.9114420062695925}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7300613496932515, 0.26993865030674846}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7417923691215617, 0.25820763087843834}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[10] <= -10.0) {
                                                            memcpy(var0, (const double[]){0.8922770964534306, 0.10772290354656944}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[10] <= 2.0) {
                                                                if (input[19] <= 0.5) {
                                                                    memcpy(var0, (const double[]){0.24271012006861065, 0.7572898799313894}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.8337349397590361, 0.16626506024096385}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[10] <= 322.0) {
                                                                    if (input[10] <= 14.0) {
                                                                        if (input[19] <= 0.5) {
                                                                            memcpy(var0, (const double[]){0.3350877192982456, 0.6649122807017543}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7938671209540034, 0.2061328790459966}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9444168734491315, 0.055583126550868486}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[10] <= 652.0) {
                                                                        memcpy(var0, (const double[]){0.27065217391304347, 0.7293478260869565}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7839506172839507, 0.21604938271604937}, 2 * sizeof(double));
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
                                        if (input[9] <= 2.0) {
                                            if (input[18] <= 17.5) {
                                                if (input[19] <= 0.5) {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8714524207011686, 0.1285475792988314}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.918796015591165, 0.08120398440883499}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[19] <= 0.5) {
                                    if (input[17] <= 62.0) {
                                        if (input[11] <= 2.0) {
                                            if (input[18] <= 17.5) {
                                                memcpy(var0, (const double[]){0.1455078125, 0.8544921875}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 17.5) {
                                                if (input[15] <= -2.0) {
                                                    if (input[15] <= -60.0) {
                                                        memcpy(var0, (const double[]){0.6190476190476191, 0.38095238095238093}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.09633357296908698, 0.903666427030913}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.5062785388127854, 0.4937214611872146}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[26] <= 1408.0) {
                                            memcpy(var0, (const double[]){0.16730038022813687, 0.8326996197718631}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 17.5) {
                                                if (input[11] <= 56.0) {
                                                    if (input[11] <= -60.0) {
                                                        memcpy(var0, (const double[]){0.8447075208913649, 0.15529247910863508}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4917684545937334, 0.5082315454062666}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8687524990003999, 0.13124750099960017}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[17] <= 14.0) {
                                        if (input[20] <= 44.0) {
                                            memcpy(var0, (const double[]){0.8004587155963303, 0.19954128440366972}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9533907381227777, 0.046609261877222294}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[19] <= 0.5) {
                        if (input[18] <= 19.5) {
                            if (input[13] <= 1.0) {
                                if (input[15] <= 10.0) {
                                    if (input[15] <= -2.0) {
                                        if (input[9] <= -174.0) {
                                            memcpy(var0, (const double[]){0.5017277125086386, 0.49827228749136143}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.24368600682593858, 0.7563139931740614}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[14] <= 10.0) {
                                            if (input[14] <= -6.0) {
                                                memcpy(var0, (const double[]){0.4323264025107885, 0.5676735974892114}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7275534441805226, 0.2724465558194774}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.41689539493748096, 0.583104605062519}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.27633166695397343, 0.7236683330460265}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= -2.0) {
                                    if (input[11] <= -62.0) {
                                        memcpy(var0, (const double[]){0.677109440267335, 0.322890559732665}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.3649402390438247, 0.6350597609561753}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= -2.0) {
                                        if (input[9] <= -2.0) {
                                            memcpy(var0, (const double[]){0.5817245817245817, 0.41827541827541825}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= 2.0) {
                                            if (input[26] <= 1408.0) {
                                                if (input[14] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.21559633027522937, 0.7844036697247706}, 2 * sizeof(double));
                                                } else {
                                                    if (input[16] <= 2.0) {
                                                        if (input[16] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.8410725964682799, 0.15892740353172008}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[17] <= 2.0) {
                                                                if (input[17] <= -2.0) {
                                                                    memcpy(var0, (const double[]){0.9195402298850575, 0.08045977011494253}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1600771456123433, 0.8399228543876567}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.924953095684803, 0.075046904315197}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8944625407166124, 0.10553745928338762}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[20] <= 40.5) {
                                                    memcpy(var0, (const double[]){0.8706709956709957, 0.12932900432900432}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.7632871817775793, 0.2367128182224207}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[9] <= 2.0) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7659016393442623, 0.2340983606557377}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[18] <= 20.5) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= 21.5) {
                                    if (input[13] <= 1.5) {
                                        memcpy(var0, (const double[]){0.39111111111111113, 0.6088888888888889}, 2 * sizeof(double));
                                    } else {
                                        if (input[26] <= 3456.0) {
                                            if (input[15] <= -2.0) {
                                                memcpy(var0, (const double[]){0.36968576709796674, 0.6303142329020333}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    memcpy(var0, (const double[]){0.7856586126266563, 0.21434138737334374}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4427672955974843, 0.5572327044025157}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.40433925049309666, 0.5956607495069034}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 22.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 23.5) {
                                            memcpy(var0, (const double[]){0.29292628443782576, 0.7070737155621742}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 24.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 43.5) {
                                                    if (input[26] <= 2176.0) {
                                                        if (input[18] <= 25.5) {
                                                            memcpy(var0, (const double[]){0.355484387510008, 0.644515612489992}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 27.5) {
                                                                    memcpy(var0, (const double[]){0.37830319888734354, 0.6216968011126565}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.7328785095775388, 0.2671214904224613}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 25.5) {
                                                            memcpy(var0, (const double[]){0.256561328334226, 0.7434386716657739}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 27.5) {
                                                                    memcpy(var0, (const double[]){0.2510729613733906, 0.7489270386266095}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.564875730994152, 0.43512426900584794}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.934468085106383, 0.06553191489361702}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 3.0) {
                            memcpy(var0, (const double[]){0.7769360269360269, 0.22306397306397308}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9170979324006439, 0.0829020675993562}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[18] <= 16.5) {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[19] <= 0.5) {
                        if (input[18] <= 17.5) {
                            if (input[17] <= -2.0) {
                                if (input[17] <= -62.0) {
                                    if (input[13] <= 10.0) {
                                        if (input[11] <= -4.0) {
                                            if (input[11] <= -126.0) {
                                                if (input[17] <= -68.0) {
                                                    memcpy(var0, (const double[]){0.2259355613368021, 0.774064438663198}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8324958123953099, 0.16750418760469013}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.14113724763845156, 0.8588627523615484}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5277777777777778, 0.4722222222222222}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4917642389362969, 0.5082357610637032}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= -14.0) {
                                        memcpy(var0, (const double[]){0.4143646408839779, 0.585635359116022}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.034754304913901725, 0.9652456950860983}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[11] <= -62.0) {
                                    if (input[13] <= 18.0) {
                                        memcpy(var0, (const double[]){0.6932911740445422, 0.3067088259554578}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5115807759119861, 0.4884192240880139}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[13] <= 9.5) {
                                        if (input[17] <= 2.0) {
                                            if (input[11] <= 56.0) {
                                                if (input[16] <= 2.0) {
                                                    if (input[22] <= 1.5) {
                                                        if (input[16] <= -2.0) {
                                                            if (input[16] <= -62.0) {
                                                                if (input[10] <= -52.0) {
                                                                    if (input[10] <= -106.0) {
                                                                        memcpy(var0, (const double[]){0.3685304117869286, 0.6314695882130714}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.12351868732907931, 0.8764813126709207}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.9047619047619048, 0.09523809523809523}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.04676094890510949, 0.9532390510948905}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[10] <= -50.0) {
                                                                memcpy(var0, (const double[]){0.9701280227596017, 0.029871977240398292}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[22] <= -0.5) {
                                                                    if (input[14] <= 2.0) {
                                                                        memcpy(var0, (const double[]){0.8151436031331593, 0.18485639686684074}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.2698412698412698, 0.7301587301587301}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[10] <= 48.0) {
                                                                        if (input[20] <= 39.0) {
                                                                            memcpy(var0, (const double[]){0.3631953428201811, 0.6368046571798189}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.1371527777777778, 0.8628472222222222}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.9967845659163987, 0.003215434083601286}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[10] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.23986486486486486, 0.7601351351351351}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8001693480101609, 0.19983065198983913}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[10] <= 2.0) {
                                                        if (input[16] <= 44.0) {
                                                            memcpy(var0, (const double[]){0.1531791907514451, 0.846820809248555}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7243401759530792, 0.2756598240469208}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[10] <= 190.0) {
                                                            memcpy(var0, (const double[]){0.08542465076029175, 0.9145753492397083}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.31774115365971883, 0.6822588463402811}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.8538461538461538, 0.14615384615384616}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[15] <= -62.0) {
                                                if (input[17] <= 66.0) {
                                                    if (input[11] <= 120.0) {
                                                        memcpy(var0, (const double[]){0.3702677746999077, 0.6297322253000923}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8149466192170819, 0.18505338078291814}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.16091954022988506, 0.8390804597701149}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[9] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.053173948887056885, 0.9468260511129432}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2925764192139738, 0.7074235807860262}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[17] <= 2.0) {
                                            if (input[11] <= -2.0) {
                                                memcpy(var0, (const double[]){0.23973176865046103, 0.760268231349539}, 2 * sizeof(double));
                                            } else {
                                                if (input[16] <= -2.0) {
                                                    if (input[16] <= -54.0) {
                                                        memcpy(var0, (const double[]){0.5647969052224371, 0.43520309477756286}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.14878892733564014, 0.8512110726643599}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[16] <= 2.0) {
                                                        memcpy(var0, (const double[]){0.8748594979393031, 0.12514050206069688}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[16] <= 366.0) {
                                                            memcpy(var0, (const double[]){0.39065934065934066, 0.6093406593406593}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.750281214848144, 0.24971878515185603}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[17] <= 62.0) {
                                                if (input[15] <= 14.0) {
                                                    memcpy(var0, (const double[]){0.04470198675496689, 0.9552980132450332}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.3829344432882414, 0.6170655567117586}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[9] <= -62.0) {
                                                    memcpy(var0, (const double[]){0.6059683313032886, 0.3940316686967113}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= 24.0) {
                                                        memcpy(var0, (const double[]){0.19111969111969113, 0.8088803088803089}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4811320754716981, 0.5188679245283019}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[13] <= 10.5) {
                                if (input[17] <= -2.0) {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 19.5) {
                                            memcpy(var0, (const double[]){0.4619508820477343, 0.5380491179522656}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[15] <= 2.0) {
                                                    memcpy(var0, (const double[]){0.6108786610878661, 0.3891213389121339}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.33270852858481725, 0.6672914714151827}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[11] <= 2.0) {
                                            if (input[18] <= 19.5) {
                                                if (input[14] <= 2.0) {
                                                    if (input[14] <= -2.0) {
                                                        if (input[8] <= -2.0) {
                                                            memcpy(var0, (const double[]){0.6025582457743262, 0.39744175422567385}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7402877697841727, 0.25971223021582734}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[8] <= 2.0) {
                                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.529335071707953, 0.4706649282920469}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5689058171745153, 0.4310941828254848}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.5259778166958552, 0.47402218330414475}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 44.0) {
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 19.5) {
                                            if (input[13] <= 12.0) {
                                                memcpy(var0, (const double[]){0.16299559471365638, 0.8370044052863436}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.4256686947537596, 0.5743313052462404}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[13] <= 12.5) {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.5574375955170657, 0.44256240448293427}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[26] <= 2176.0) {
                                                    if (input[14] <= 2.0) {
                                                        if (input[25] <= 1.0) {
                                                            if (input[18] <= 21.5) {
                                                                if (input[18] <= 20.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2546933667083855, 0.7453066332916145}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[13] <= 14.5) {
                                                                    memcpy(var0, (const double[]){0.771964461994077, 0.228035538005923}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.48927573608424674, 0.5107242639157533}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[2] <= 0.5) {
                                                                memcpy(var0, (const double[]){0.48306409588327254, 0.5169359041167274}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[13] <= 40.0) {
                                                                    memcpy(var0, (const double[]){0.3992047713717694, 0.6007952286282306}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.1382857142857143, 0.8617142857142858}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2923076923076923, 0.7076923076923077}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            if (input[13] <= 16.0) {
                                                                memcpy(var0, (const double[]){0.13596315578694435, 0.8640368442130557}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.36594724220623503, 0.634052757793765}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[13] <= 14.5) {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.4581029349213101, 0.54189706507869}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    if (input[18] <= 22.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.15606030937928334, 0.8439396906207166}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[7] <= 48.0) {
                                                                            memcpy(var0, (const double[]){0.2832686601232595, 0.7167313398767404}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.42610419026047563, 0.5738958097395244}, 2 * sizeof(double));
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
                                    if (input[18] <= 18.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[15] <= -2.0) {
                                            if (input[15] <= -62.0) {
                                                memcpy(var0, (const double[]){0.27183762232693004, 0.7281623776730699}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.0692436974789916, 0.9307563025210084}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[15] <= 2.0) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.1935945095796397, 0.8064054904203604}, 2 * sizeof(double));
                                                } else {
                                                    if (input[13] <= 12.0) {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.48161764705882354, 0.5183823529411765}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[14] <= 2.0) {
                                                            memcpy(var0, (const double[]){0.4014197696222877, 0.5985802303777122}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.25231788079470197, 0.747682119205298}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.19695882943623583, 0.8030411705637641}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[14] <= -446.0) {
                            if (input[20] <= 33.0) {
                                memcpy(var0, (const double[]){0.7739855896852484, 0.2260144103147516}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9028743384870811, 0.09712566151291896}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[18] <= 19.5) {
                                if (input[18] <= 18.5) {
                                    if (input[18] <= 17.5) {
                                        if (input[13] <= 10.0) {
                                            if (input[1] <= 3.5) {
                                                if (input[24] <= 7330.5) {
                                                    memcpy(var0, (const double[]){0.7719082719082719, 0.2280917280917281}, 2 * sizeof(double));
                                                } else {
                                                    if (input[15] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.48761742100768574, 0.5123825789923142}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6403609831029186, 0.3596390168970814}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[24] <= 3254.5) {
                                                    memcpy(var0, (const double[]){0.7562076749435666, 0.24379232505643342}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4711895910780669, 0.5288104089219331}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.7730349605797563, 0.22696503942024368}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[26] <= 2176.0) {
                                        memcpy(var0, (const double[]){0.3990913679959616, 0.6009086320040383}, 2 * sizeof(double));
                                    } else {
                                        if (input[13] <= 10.0) {
                                            memcpy(var0, (const double[]){0.6218392957482675, 0.37816070425173254}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4162985865724382, 0.5837014134275619}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[13] <= 12.0) {
                                    if (input[18] <= 20.5) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[18] <= 21.5) {
                                            memcpy(var0, (const double[]){0.6229567744278969, 0.3770432255721032}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7313406121353141, 0.26865938786468585}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[18] <= 37.5) {
                                        if (input[22] <= -69.5) {
                                            memcpy(var0, (const double[]){0.7484035759897829, 0.2515964240102171}, 2 * sizeof(double));
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    if (input[13] <= 14.0) {
                                                        memcpy(var0, (const double[]){0.281505728314239, 0.7184942716857611}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.576530612244898, 0.42346938775510207}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.43543223052294555, 0.5645677694770544}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.501123595505618, 0.49887640449438203}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6739784407119579, 0.3260215592880421}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.8634461772537086, 0.13655382274629135}, 2 * sizeof(double));
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
                if (input[18] <= 17.5) {
                    if (input[27] <= 156.0) {
                        if (input[10] <= 2.0) {
                            if (input[14] <= 2.0) {
                                if (input[8] <= -2.0) {
                                    memcpy(var0, (const double[]){0.025890881702207786, 0.9741091182977922}, 2 * sizeof(double));
                                } else {
                                    if (input[9] <= 2.0) {
                                        if (input[9] <= -2.0) {
                                            memcpy(var0, (const double[]){0.01838733986435569, 0.9816126601356443}, 2 * sizeof(double));
                                        } else {
                                            if (input[8] <= 2.0) {
                                                if (input[26] <= 3456.0) {
                                                    if (input[10] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.00904977375565611, 0.9909502262443439}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[19] <= 0.5) {
                                                            if (input[16] <= 2.0) {
                                                                if (input[17] <= 2.0) {
                                                                    if (input[4] <= 4.0) {
                                                                        memcpy(var0, (const double[]){0.21374045801526717, 0.7862595419847328}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8567382582015577, 0.14326174179844228}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.043010752688172046, 0.956989247311828}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.14146341463414633, 0.8585365853658536}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.11797752808988764, 0.8820224719101124}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.04279475982532751, 0.9572052401746725}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.013857312980404893, 0.9861426870195951}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0071146526270854825, 0.9928853473729146}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.00229034862109749, 0.9977096513789026}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[15] <= 10.0) {
                            if (input[14] <= -6.0) {
                                memcpy(var0, (const double[]){0.06372146493677122, 0.9362785350632288}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= 2.0) {
                                    if (input[9] <= -2.0) {
                                        if (input[15] <= -2.0) {
                                            memcpy(var0, (const double[]){0.08496732026143791, 0.9150326797385621}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6891891891891891, 0.3108108108108108}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[14] <= -2.0) {
                                            memcpy(var0, (const double[]){0.18990384615384615, 0.8100961538461539}, 2 * sizeof(double));
                                        } else {
                                            if (input[15] <= 2.0) {
                                                if (input[15] <= -2.0) {
                                                    memcpy(var0, (const double[]){0.08139534883720931, 0.9186046511627907}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8269720101781171, 0.17302798982188294}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.2553846153846154, 0.7446153846153846}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.09160186625194401, 0.908398133748056}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.04424881269547087, 0.9557511873045291}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[18] <= 18.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[20] <= 44.0) {
                            if (input[19] <= 0.5) {
                                if (input[13] <= 8.5) {
                                    if (input[24] <= 18281.5) {
                                        if (input[12] <= 10.5) {
                                            if (input[13] <= 3.0) {
                                                if (input[0] <= 29.5) {
                                                    if (input[18] <= 19.5) {
                                                        if (input[15] <= 14.0) {
                                                            if (input[15] <= -6.0) {
                                                                memcpy(var0, (const double[]){0.1487845766974015, 0.8512154233025985}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.34863305743666917, 0.6513669425633308}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.10510732790525537, 0.8948926720947447}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[24] <= 5375.5) {
                                                                if (input[18] <= 21.5) {
                                                                    memcpy(var0, (const double[]){0.17578125, 0.82421875}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 22.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 23.5) {
                                                                            memcpy(var0, (const double[]){0.18292682926829268, 0.8170731707317073}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 24.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.45180722891566266, 0.5481927710843374}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 21.5) {
                                                                    memcpy(var0, (const double[]){0.3268101761252446, 0.6731898238747553}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 22.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 23.5) {
                                                                            memcpy(var0, (const double[]){0.3578826237054085, 0.6421173762945915}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 24.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 25.5) {
                                                                                    memcpy(var0, (const double[]){0.35152838427947597, 0.648471615720524}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.7739595265368461, 0.22604047346315387}, 2 * sizeof(double));
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
                                                        memcpy(var0, (const double[]){0.12891780011827322, 0.8710821998817267}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.1376476630713919, 0.8623523369286081}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.3398209420007785, 0.6601790579992215}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[17] <= -2.0) {
                                                    if (input[11] <= -62.0) {
                                                        memcpy(var0, (const double[]){0.6597195907540735, 0.3402804092459265}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 19.5) {
                                                            memcpy(var0, (const double[]){0.26, 0.74}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5789923142613151, 0.4210076857386849}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[17] <= 2.0) {
                                                        memcpy(var0, (const double[]){0.7438672438672439, 0.25613275613275616}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[11] <= 60.0) {
                                                            if (input[18] <= 19.5) {
                                                                memcpy(var0, (const double[]){0.3108108108108108, 0.6891891891891891}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.5802469135802469, 0.41975308641975306}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.711489898989899, 0.288510101010101}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 28.5) {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.06957490845406783, 0.9304250915459322}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            if (input[12] <= 12.5) {
                                                                if (input[13] <= 3.0) {
                                                                    memcpy(var0, (const double[]){0.23736892278360344, 0.7626310772163966}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.6015424164524421, 0.39845758354755784}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06482982171799027, 0.9351701782820098}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    if (input[12] <= 14.5) {
                                                                        memcpy(var0, (const double[]){0.3134959349593496, 0.6865040650406504}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.06401688357368976, 0.9359831164263103}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            if (input[12] <= 16.5) {
                                                                                memcpy(var0, (const double[]){0.31290555155010813, 0.6870944484498919}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.0765993265993266, 0.9234006734006734}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 27.5) {
                                                                                    if (input[12] <= 18.5) {
                                                                                        memcpy(var0, (const double[]){0.29598214285714286, 0.7040178571428571}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.07567567567567568, 0.9243243243243243}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[18] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 29.5) {
                                                                                            if (input[12] <= 20.5) {
                                                                                                memcpy(var0, (const double[]){0.31626794258373203, 0.683732057416268}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.0927441352973268, 0.9072558647026732}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[12] <= 22.5) {
                                                                                                if (input[27] <= 108.0) {
                                                                                                    if (input[18] <= 49.5) {
                                                                                                        memcpy(var0, (const double[]){0.3563218390804598, 0.6436781609195402}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.7586206896551724, 0.2413793103448276}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[18] <= 30.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 31.5) {
                                                                                                            memcpy(var0, (const double[]){0.3527724665391969, 0.6472275334608031}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 32.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 33.5) {
                                                                                                                    memcpy(var0, (const double[]){0.2826510721247563, 0.7173489278752436}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.746217968508799, 0.253782031491201}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[26] <= 2176.0) {
                                                                                                    if (input[16] <= 310.0) {
                                                                                                        memcpy(var0, (const double[]){0.45052316890881916, 0.5494768310911808}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.6498740554156172, 0.3501259445843829}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[24] <= 6170.5) {
                                                                                                        memcpy(var0, (const double[]){0.3399918798213561, 0.660008120178644}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.45651414600069856, 0.5434858539993014}, 2 * sizeof(double));
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
                                                    memcpy(var0, (const double[]){0.03449825823126194, 0.965501741768738}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[12] <= 11.5) {
                                                            if (input[13] <= 3.0) {
                                                                if (input[18] <= 21.5) {
                                                                    memcpy(var0, (const double[]){0.16834677419354838, 0.8316532258064516}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 22.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 23.5) {
                                                                            memcpy(var0, (const double[]){0.13950398582816653, 0.8604960141718335}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 24.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 25.5) {
                                                                                    memcpy(var0, (const double[]){0.16727272727272727, 0.8327272727272728}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5511251480457955, 0.4488748519542045}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6322475570032573, 0.36775244299674265}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 21.5) {
                                                                memcpy(var0, (const double[]){0.04105060152447424, 0.9589493984755257}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        if (input[12] <= 14.5) {
                                                                            if (input[13] <= 3.0) {
                                                                                memcpy(var0, (const double[]){0.18813368381524595, 0.811866316184754}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.6562935438922434, 0.34370645610775663}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.04138431752178122, 0.9586156824782188}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 24.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 25.5) {
                                                                                if (input[12] <= 16.5) {
                                                                                    if (input[13] <= 3.0) {
                                                                                        memcpy(var0, (const double[]){0.19819539514623521, 0.8018046048537648}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.6233561283534982, 0.3766438716465018}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.048725297933323274, 0.9512747020666767}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 27.5) {
                                                                                        if (input[12] <= 18.5) {
                                                                                            if (input[13] <= 3.0) {
                                                                                                memcpy(var0, (const double[]){0.17524213075060532, 0.8247578692493946}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (const double[]){0.6085874299937772, 0.39141257000622276}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.04866723989681857, 0.9513327601031815}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[26] <= 2176.0) {
                                                                                                if (input[16] <= -2.0) {
                                                                                                    memcpy(var0, (const double[]){0.31404593639575973, 0.6859540636042403}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 29.5) {
                                                                                                        memcpy(var0, (const double[]){0.2870275791624106, 0.7129724208375894}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 30.5) {
                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.4995697074010327, 0.5004302925989673}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[18] <= 29.5) {
                                                                                                    if (input[12] <= 20.5) {
                                                                                                        if (input[13] <= 3.0) {
                                                                                                            memcpy(var0, (const double[]){0.18331922099915327, 0.8166807790008468}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.6122262773722628, 0.38777372262773724}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.049087638139295814, 0.9509123618607042}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[18] <= 30.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[12] <= 29.5) {
                                                                                                            if (input[18] <= 31.5) {
                                                                                                                if (input[12] <= 22.5) {
                                                                                                                    if (input[13] <= 3.0) {
                                                                                                                        memcpy(var0, (const double[]){0.16728797763280523, 0.8327120223671948}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, (const double[]){0.6822633297062024, 0.3177366702937976}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var0, (const double[]){0.047501759324419426, 0.9524982406755805}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[18] <= 32.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 33.5) {
                                                                                                                        if (input[12] <= 24.5) {
                                                                                                                            if (input[13] <= 3.0) {
                                                                                                                                memcpy(var0, (const double[]){0.19769192172604114, 0.8023080782739589}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, (const double[]){0.6420079260237781, 0.3579920739762219}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, (const double[]){0.02962962962962963, 0.9703703703703703}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 34.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 35.5) {
                                                                                                                                if (input[12] <= 26.5) {
                                                                                                                                    if (input[13] <= 3.0) {
                                                                                                                                        memcpy(var0, (const double[]){0.19194560669456068, 0.8080543933054394}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, (const double[]){0.6219739292364991, 0.3780260707635009}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, (const double[]){0.03433984606275903, 0.9656601539372409}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 36.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 37.5) {
                                                                                                                                        if (input[12] <= 28.5) {
                                                                                                                                            if (input[13] <= 3.0) {
                                                                                                                                                memcpy(var0, (const double[]){0.20959902794653706, 0.7904009720534629}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var0, (const double[]){0.7124463519313304, 0.2875536480686695}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.027085590465872156, 0.9729144095341279}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 38.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[27] <= 102.0) {
                                                                                                                                                if (input[13] <= 3.0) {
                                                                                                                                                    memcpy(var0, (const double[]){0.25256042605489554, 0.7474395739451045}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, (const double[]){0.5625899280575539, 0.437410071942446}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[18] <= 39.5) {
                                                                                                                                                    memcpy(var0, (const double[]){0.2650918635170604, 0.7349081364829396}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[18] <= 40.5) {
                                                                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[18] <= 41.5) {
                                                                                                                                                            memcpy(var0, (const double[]){0.18322295805739514, 0.8167770419426048}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, (const double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
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
                                                                                                            memcpy(var0, (const double[]){0.2256480056811457, 0.7743519943188543}, 2 * sizeof(double));
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
                                        if (input[18] <= 19.5) {
                                            if (input[12] <= 10.5) {
                                                if (input[13] <= 3.0) {
                                                    memcpy(var0, (const double[]){0.2765748031496063, 0.7234251968503937}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= -2.0) {
                                                        memcpy(var0, (const double[]){0.43385490753911804, 0.566145092460882}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6925577416595381, 0.30744225834046196}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.06212931453573165, 0.9378706854642683}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[12] <= 12.5) {
                                                if (input[0] <= 29.5) {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            if (input[13] <= 3.0) {
                                                                memcpy(var0, (const double[]){0.36883356385431076, 0.6311664361456892}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.7097082735533238, 0.2902917264466762}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 37.5) {
                                                                if (input[18] <= 22.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 23.5) {
                                                                        memcpy(var0, (const double[]){0.4887573964497041, 0.5112426035502958}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.8085148910653608, 0.19148510893463921}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.9590292275574113, 0.040970772442588725}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            if (input[13] <= 3.0) {
                                                                memcpy(var0, (const double[]){0.2606496272630458, 0.7393503727369543}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.6500222915737851, 0.3499777084262149}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.36708315381301165, 0.6329168461869884}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.34229390681003585, 0.6577060931899642}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[26] <= 2176.0) {
                                                                                memcpy(var0, (const double[]){0.837098313713013, 0.16290168628698695}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.597870182555781, 0.40212981744421905}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 23.5) {
                                                    if (input[18] <= 20.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.07465862741620855, 0.9253413725837915}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[12] <= 14.5) {
                                                                    if (input[13] <= 3.0) {
                                                                        memcpy(var0, (const double[]){0.31526315789473686, 0.6847368421052632}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6346782988004362, 0.3653217011995638}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.08206410547851785, 0.9179358945214822}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 24.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 25.5) {
                                                            if (input[12] <= 16.5) {
                                                                if (input[13] <= 3.0) {
                                                                    memcpy(var0, (const double[]){0.32073986619441164, 0.6792601338055884}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.616969696969697, 0.38303030303030305}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.08871189233726998, 0.91128810766273}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[18] <= 26.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 27.5) {
                                                                    if (input[12] <= 18.5) {
                                                                        memcpy(var0, (const double[]){0.4062107904642409, 0.5937892095357591}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.09079716835949522, 0.9092028316405047}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[12] <= 20.5) {
                                                                        if (input[27] <= 114.0) {
                                                                            if (input[18] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.5230268789590824, 0.47697312104091766}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[18] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 29.5) {
                                                                                    memcpy(var0, (const double[]){0.4201973302379571, 0.579802669762043}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.8240139790314528, 0.17598602096854718}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[20] <= 33.0) {
                                                                            if (input[1] <= 3.5) {
                                                                                memcpy(var0, (const double[]){0.5918235956864639, 0.40817640431353613}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[21] <= 23612.0) {
                                                                                    if (input[8] <= -2996.0) {
                                                                                        memcpy(var0, (const double[]){0.19731318219983207, 0.8026868178001679}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.43483904465212875, 0.5651609553478713}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5690577171307395, 0.43094228286926056}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[24] <= 59729.0) {
                                                                                if (input[18] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 29.5) {
                                                                                        memcpy(var0, (const double[]){0.0853731343283582, 0.9146268656716418}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 30.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 31.5) {
                                                                                                if (input[12] <= 22.5) {
                                                                                                    memcpy(var0, (const double[]){0.4921190893169877, 0.5078809106830122}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.1003257328990228, 0.8996742671009772}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[18] <= 32.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[21] <= 36453.0) {
                                                                                                        if (input[12] <= 32.5) {
                                                                                                            if (input[18] <= 33.5) {
                                                                                                                memcpy(var0, (const double[]){0.18841911764705882, 0.8115808823529411}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[18] <= 34.5) {
                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[18] <= 35.5) {
                                                                                                                        memcpy(var0, (const double[]){0.20934579439252338, 0.7906542056074767}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[18] <= 36.5) {
                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[18] <= 37.5) {
                                                                                                                                memcpy(var0, (const double[]){0.21450777202072538, 0.7854922279792746}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[18] <= 38.5) {
                                                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[18] <= 39.5) {
                                                                                                                                        memcpy(var0, (const double[]){0.21247113163972287, 0.7875288683602771}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[18] <= 40.5) {
                                                                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, (const double[]){0.4564846416382253, 0.5435153583617748}, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.2731364782138999, 0.7268635217861001}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[10] <= -6.0) {
                                                                                                            memcpy(var0, (const double[]){0.25722543352601157, 0.7427745664739884}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, (const double[]){0.5008332265094219, 0.49916677349057814}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[21] <= 99219.0) {
                                                                                    memcpy(var0, (const double[]){0.4835065521915951, 0.5164934478084049}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.6309425666391866, 0.3690574333608134}, 2 * sizeof(double));
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
                                    if (input[21] <= 23771.5) {
                                        if (input[20] <= 35.5) {
                                            if (input[21] <= 10929.5) {
                                                if (input[18] <= 23.5) {
                                                    memcpy(var0, (const double[]){0.13094152224587008, 0.8690584777541299}, 2 * sizeof(double));
                                                } else {
                                                    if (input[21] <= 7755.5) {
                                                        if (input[18] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.17119742863368925, 0.8288025713663107}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2397264631043257, 0.7602735368956743}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.14053002674446877, 0.8594699732555312}, 2 * sizeof(double));
                                                } else {
                                                    if (input[26] <= 2176.0) {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.4005315406863128, 0.5994684593136872}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[20] <= 27.0) {
                                                            memcpy(var0, (const double[]){0.4106722793116256, 0.5893277206883744}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 20.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.1980276992241317, 0.8019723007758683}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.16266591358373342, 0.8373340864162666}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 29.5) {
                                                                                    memcpy(var0, (const double[]){0.17148760330578514, 0.8285123966942148}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 30.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 31.5) {
                                                                                            memcpy(var0, (const double[]){0.19281437125748502, 0.807185628742515}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 32.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 33.5) {
                                                                                                    memcpy(var0, (const double[]){0.19046052631578947, 0.8095394736842105}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 34.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[18] <= 35.5) {
                                                                                                            memcpy(var0, (const double[]){0.1908220534829977, 0.8091779465170023}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[18] <= 36.5) {
                                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, (const double[]){0.3119143239625167, 0.6880856760374833}, 2 * sizeof(double));
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
                                            if (input[21] <= 14664.5) {
                                                memcpy(var0, (const double[]){0.11643406104621487, 0.8835659389537851}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 21.5) {
                                                    memcpy(var0, (const double[]){0.09152269987946966, 0.9084773001205303}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 22.5) {
                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.08693045563549161, 0.9130695443645084}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[20] <= 39.0) {
                                                                    memcpy(var0, (const double[]){0.2236294240111034, 0.7763705759888966}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.15347412542318234, 0.8465258745768177}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 21.5) {
                                            if (input[20] <= 39.0) {
                                                if (input[17] <= -10.0) {
                                                    memcpy(var0, (const double[]){0.13944603629417382, 0.8605539637058262}, 2 * sizeof(double));
                                                } else {
                                                    if (input[17] <= 2.0) {
                                                        if (input[16] <= 14.0) {
                                                            if (input[16] <= -2.0) {
                                                                memcpy(var0, (const double[]){0.22679200940070504, 0.7732079905992949}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[16] <= 2.0) {
                                                                    if (input[17] <= -2.0) {
                                                                        memcpy(var0, (const double[]){0.26720647773279355, 0.7327935222672065}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.7633991537376587, 0.23660084626234132}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.33464052287581697, 0.665359477124183}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.19206289779108948, 0.8079371022089106}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 19.5) {
                                                            memcpy(var0, (const double[]){0.08748528834837191, 0.9125147116516281}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 20.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.15947199429183018, 0.8405280057081698}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[24] <= 57023.0) {
                                                    memcpy(var0, (const double[]){0.10355456453305352, 0.8964454354669464}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.23361963190184049, 0.7663803680981595}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[18] <= 22.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[0] <= 29.5) {
                                                    if (input[18] <= 23.5) {
                                                        if (input[26] <= 2176.0) {
                                                            memcpy(var0, (const double[]){0.39106554375686564, 0.6089344562431344}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.21153846153846154, 0.7884615384615384}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[20] <= 33.0) {
                                                                if (input[18] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.30870620881026706, 0.6912937911897329}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.32290459636925456, 0.6770954036307455}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 28.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[21] <= 43623.0) {
                                                                                    memcpy(var0, (const double[]){0.46366689053055743, 0.5363331094694426}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5456691364500689, 0.45433086354993113}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 25.5) {
                                                                    memcpy(var0, (const double[]){0.22029372496662217, 0.7797062750333779}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 26.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[21] <= 48643.0) {
                                                                            memcpy(var0, (const double[]){0.3585584645874622, 0.6414415354125378}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.4749357858977546, 0.5250642141022455}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[21] <= 80865.0) {
                                                        if (input[18] <= 23.5) {
                                                            memcpy(var0, (const double[]){0.12922403003754693, 0.8707759699624531}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 24.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[21] <= 38613.5) {
                                                                    memcpy(var0, (const double[]){0.2395504803335146, 0.7604495196664854}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 25.5) {
                                                                        memcpy(var0, (const double[]){0.16311216429699843, 0.8368878357030016}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 26.5) {
                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.3206792795020815, 0.6793207204979185}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[24] <= 163287.5) {
                                                            memcpy(var0, (const double[]){0.4096802074330164, 0.5903197925669835}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.557139904939037, 0.442860095060963}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[13] <= 8.0) {
                                    if (input[12] <= 10.0) {
                                        if (input[13] <= 3.0) {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.21685761047463176, 0.7831423895253683}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6602717825739408, 0.33972821742605913}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 19.5) {
                                                if (input[26] <= 3456.0) {
                                                    if (input[24] <= 16296.5) {
                                                        memcpy(var0, (const double[]){0.7490830909320855, 0.25091690906791453}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.5762765620044402, 0.4237234379955598}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.8872180451127819, 0.11278195488721804}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.9048616305160808, 0.09513836948391922}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[18] <= 19.5) {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[13] <= 3.0) {
                                                if (input[18] <= 39.5) {
                                                    if (input[17] <= -266.0) {
                                                        memcpy(var0, (const double[]){0.12583148558758314, 0.8741685144124168}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3613162118780096, 0.6386837881219903}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[26] <= 2176.0) {
                                                        memcpy(var0, (const double[]){0.6626643796455117, 0.3373356203544883}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4366060606060606, 0.5633939393939394}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[12] <= 12.0) {
                                                    memcpy(var0, (const double[]){0.8488122731771692, 0.15118772682283074}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[24] <= 6831.5) {
                                                                memcpy(var0, (const double[]){0.7882801161103048, 0.2117198838896952}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.5239179954441914, 0.4760820045558087}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.6730006456968914, 0.32699935430310856}, 2 * sizeof(double));
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
                                    if (input[26] <= 3456.0) {
                                        if (input[18] <= 19.5) {
                                            if (input[12] <= 10.0) {
                                                if (input[8] <= 234.0) {
                                                    memcpy(var0, (const double[]){0.10820559062218214, 0.8917944093778178}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.2697522206638616, 0.7302477793361384}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 20.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 10.0) {
                                                    if (input[13] <= 10.0) {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.7129266927811976, 0.2870733072188025}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.8576101177496729, 0.1423898822503271}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.24694727768998706, 0.753052722310013}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 22.5) {
                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.3134221799143265, 0.6865778200856735}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[18] <= 24.5) {
                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 45.5) {
                                                                            if (input[18] <= 25.5) {
                                                                                memcpy(var0, (const double[]){0.3720083246618106, 0.6279916753381893}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5372064276885044, 0.46279357231149565}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.9010282776349614, 0.09897172236503857}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 23.5) {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){0.29258030584998784, 0.7074196941500122}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[13] <= 10.0) {
                                                                if (input[12] <= 12.0) {
                                                                    memcpy(var0, (const double[]){0.44756554307116103, 0.552434456928839}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.14673913043478262, 0.8532608695652174}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.09858170893593236, 0.9014182910640677}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[18] <= 24.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 31.5) {
                                                                if (input[13] <= 12.0) {
                                                                    if (input[12] <= 12.0) {
                                                                        memcpy(var0, (const double[]){0.6846084608460846, 0.3153915391539154}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.172607421875, 0.827392578125}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= 14.0) {
                                                                                if (input[18] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 27.5) {
                                                                                        memcpy(var0, (const double[]){0.3971389645776567, 0.6028610354223434}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.7204522096608428, 0.2795477903391572}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 26.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 27.5) {
                                                                                        memcpy(var0, (const double[]){0.184375, 0.815625}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 28.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){0.3936287074331747, 0.6063712925668253}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[12] <= 12.0) {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.20397163120567377, 0.7960283687943263}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 27.5) {
                                                                                    memcpy(var0, (const double[]){0.3117953165654814, 0.6882046834345187}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.5476377952755905, 0.45236220472440947}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 27.5) {
                                                                            memcpy(var0, (const double[]){0.15351558928408157, 0.8464844107159184}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= 14.0) {
                                                                                if (input[18] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[13] <= 14.0) {
                                                                                        memcpy(var0, (const double[]){0.6004842615012107, 0.39951573849878935}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.2924119241192412, 0.7075880758807588}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 28.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 30.5) {
                                                                                        if (input[18] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.11973456433929602, 0.880265435660704}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.12901572112098428, 0.8709842788790157}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[18] <= 32.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[13] <= 14.0) {
                                                                        if (input[18] <= 45.5) {
                                                                            if (input[12] <= 16.0) {
                                                                                memcpy(var0, (const double[]){0.7222898903775883, 0.2777101096224117}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 33.5) {
                                                                                    memcpy(var0, (const double[]){0.3162393162393162, 0.6837606837606838}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 34.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.5200440528634361, 0.47995594713656387}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.7526315789473684, 0.24736842105263157}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 35.5) {
                                                                            if (input[12] <= 16.0) {
                                                                                if (input[13] <= 16.0) {
                                                                                    memcpy(var0, (const double[]){0.6305460750853242, 0.36945392491467577}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, (const double[]){0.369106846718787, 0.630893153281213}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.20633904274051545, 0.7936609572594846}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[12] <= 18.0) {
                                                                                if (input[18] <= 36.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 37.5) {
                                                                                        memcpy(var0, (const double[]){0.3847472150814053, 0.6152527849185947}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 38.5) {
                                                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 39.5) {
                                                                                                memcpy(var0, (const double[]){0.3915929203539823, 0.6084070796460177}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 40.5) {
                                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, (const double[]){0.5765652951699464, 0.4234347048300537}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[18] <= 36.5) {
                                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[14] <= 538.0) {
                                                                                        memcpy(var0, (const double[]){0.387295690936107, 0.6127043090638931}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, (const double[]){0.48478260869565215, 0.5152173913043478}, 2 * sizeof(double));
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
                                        if (input[21] <= 15994.5) {
                                            if (input[18] <= 19.5) {
                                                if (input[12] <= 10.0) {
                                                    memcpy(var0, (const double[]){0.3440567066521265, 0.6559432933478735}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[18] <= 20.5) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        if (input[12] <= 12.0) {
                                                            memcpy(var0, (const double[]){0.32517061421116017, 0.6748293857888398}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[18] <= 22.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[18] <= 23.5) {
                                                                memcpy(var0, (const double[]){0.2673733804475854, 0.7326266195524146}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 24.5) {
                                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[20] <= 33.0) {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.2842497670083877, 0.7157502329916123}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[18] <= 26.5) {
                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[18] <= 27.5) {
                                                                                    memcpy(var0, (const double[]){0.2864054184808902, 0.7135945815191098}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 28.5) {
                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[18] <= 29.5) {
                                                                                            memcpy(var0, (const double[]){0.29010416666666666, 0.7098958333333333}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[18] <= 30.5) {
                                                                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[18] <= 31.5) {
                                                                                                    memcpy(var0, (const double[]){0.32219827586206895, 0.677801724137931}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[18] <= 32.5) {
                                                                                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, (const double[]){0.4779607934114372, 0.5220392065885628}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.38982423681776135, 0.6101757631822387}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[20] <= 35.0) {
                                                if (input[7] <= 48.0) {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.3602540834845735, 0.6397459165154264}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5970332850940666, 0.40296671490593344}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[18] <= 19.5) {
                                                        memcpy(var0, (const double[]){0.4207525655644242, 0.5792474344355758}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.6825823137371929, 0.31741768626280714}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[21] <= 67837.5) {
                                                    if (input[18] <= 27.5) {
                                                        memcpy(var0, (const double[]){0.3738661436626624, 0.6261338563373375}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4492402137254159, 0.5507597862745841}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[21] <= 129719.0) {
                                                        memcpy(var0, (const double[]){0.546446100708962, 0.453553899291038}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.689533082540385, 0.31046691745961497}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[13] <= 8.0) {
                                if (input[13] <= 0.0) {
                                    memcpy(var0, (const double[]){0.029453766511960015, 0.97054623348804}, 2 * sizeof(double));
                                } else {
                                    if (input[19] <= 0.5) {
                                        if (input[17] <= 2.0) {
                                            if (input[12] <= 10.0) {
                                                memcpy(var0, (const double[]){0.6247150022799818, 0.3752849977200182}, 2 * sizeof(double));
                                            } else {
                                                if (input[18] <= 19.5) {
                                                    memcpy(var0, (const double[]){0.004359197907585004, 0.995640802092415}, 2 * sizeof(double));
                                                } else {
                                                    if (input[12] <= 12.0) {
                                                        memcpy(var0, (const double[]){0.6277641277641277, 0.37223587223587223}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[18] <= 21.5) {
                                                            memcpy(var0, (const double[]){0.013302752293577982, 0.986697247706422}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[12] <= 14.0) {
                                                                memcpy(var0, (const double[]){0.6185397867104184, 0.38146021328958163}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[18] <= 23.5) {
                                                                    memcpy(var0, (const double[]){0.01993127147766323, 0.9800687285223367}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[12] <= 16.0) {
                                                                        memcpy(var0, (const double[]){0.6451612903225806, 0.3548387096774194}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[18] <= 25.5) {
                                                                            memcpy(var0, (const double[]){0.011363636363636364, 0.9886363636363636}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[12] <= 18.0) {
                                                                                memcpy(var0, (const double[]){0.6556521739130434, 0.3443478260869565}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var0, (const double[]){0.28193209377526274, 0.7180679062247373}, 2 * sizeof(double));
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
                                                if (input[17] <= 60.0) {
                                                    memcpy(var0, (const double[]){0.1951219512195122, 0.8048780487804879}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.6493362831858407, 0.3506637168141593}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.1449188214070956, 0.8550811785929044}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[12] <= 10.0) {
                                            if (input[24] <= 35766.5) {
                                                memcpy(var0, (const double[]){0.8913096695226438, 0.10869033047735618}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.7245981195025781, 0.2754018804974219}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= 19.5) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[12] <= 12.0) {
                                                    memcpy(var0, (const double[]){0.8427903871829105, 0.15720961281708945}, 2 * sizeof(double));
                                                } else {
                                                    if (input[18] <= 21.5) {
                                                        if (input[18] <= 20.5) {
                                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[24] <= 28292.5) {
                                                            memcpy(var0, (const double[]){0.7563410685375067, 0.24365893146249326}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5381325730577334, 0.46186742694226657}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.07247549839001988, 0.9275245016099801}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
