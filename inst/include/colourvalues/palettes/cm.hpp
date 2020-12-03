#ifndef R_COLOURVALUES_CM_H
#define R_COLOURVALUES_CM_H

#include <Rcpp.h>
using namespace Rcpp;

namespace colourvalues {
namespace palette {

  const Rcpp::NumericVector cm_red = {
    0.501960784313725,0.501960784313725,0.505882352941176,0.509803921568627,
    0.513725490196078,0.517647058823529,0.52156862745098,0.525490196078431,
    0.529411764705882,0.533333333333333,0.537254901960784,0.541176470588235,
    0.545098039215686,0.549019607843137,0.552941176470588,0.556862745098039,
    0.56078431372549,0.564705882352941,0.568627450980392,0.572549019607843,
    0.576470588235294,0.580392156862745,0.584313725490196,0.588235294117647,
    0.592156862745098,0.596078431372549,0.6,0.603921568627451,
    0.607843137254902,0.611764705882353,0.615686274509804,0.619607843137255,
    0.623529411764706,0.627450980392157,0.631372549019608,0.635294117647059,
    0.63921568627451,0.643137254901961,0.647058823529412,0.650980392156863,
    0.654901960784314,0.658823529411765,0.662745098039216,0.666666666666667,
    0.670588235294118,0.674509803921569,0.67843137254902,0.682352941176471,
    0.686274509803922,0.690196078431373,0.694117647058824,0.698039215686274,
    0.701960784313725,0.705882352941177,0.709803921568627,0.713725490196078,
    0.717647058823529,0.72156862745098,0.725490196078431,0.729411764705882,
    0.733333333333333,0.737254901960784,0.741176470588235,0.745098039215686,
    0.749019607843137,0.752941176470588,0.756862745098039,0.76078431372549,
    0.764705882352941,0.768627450980392,0.772549019607843,0.776470588235294,
    0.780392156862745,0.784313725490196,0.788235294117647,0.792156862745098,
    0.796078431372549,0.8,0.803921568627451,0.807843137254902,
    0.811764705882353,0.815686274509804,0.819607843137255,0.823529411764706,
    0.827450980392157,0.831372549019608,0.835294117647059,0.83921568627451,
    0.843137254901961,0.847058823529412,0.850980392156863,0.854901960784314,
    0.858823529411765,0.862745098039216,0.866666666666667,0.870588235294118,
    0.874509803921569,0.87843137254902,0.882352941176471,0.886274509803922,
    0.890196078431372,0.894117647058824,0.898039215686275,0.901960784313726,
    0.905882352941176,0.909803921568627,0.913725490196078,0.917647058823529,
    0.92156862745098,0.925490196078431,0.929411764705882,0.933333333333333,
    0.937254901960784,0.941176470588235,0.945098039215686,0.949019607843137,
    0.952941176470588,0.956862745098039,0.96078431372549,0.964705882352941,
    0.968627450980392,0.972549019607843,0.976470588235294,0.980392156862745,
    0.984313725490196,0.988235294117647,0.992156862745098,0.996078431372549,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1
  };

  const Rcpp::NumericVector cm_green = {
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    0.996078431372549,0.992156862745098,0.988235294117647,0.984313725490196,
    0.980392156862745,0.976470588235294,0.972549019607843,0.968627450980392,
    0.964705882352941,0.96078431372549,0.956862745098039,0.952941176470588,
    0.949019607843137,0.945098039215686,0.941176470588235,0.937254901960784,
    0.933333333333333,0.929411764705882,0.925490196078431,0.92156862745098,
    0.917647058823529,0.913725490196078,0.909803921568627,0.905882352941176,
    0.901960784313726,0.898039215686275,0.894117647058824,0.890196078431372,
    0.886274509803922,0.882352941176471,0.87843137254902,0.874509803921569,
    0.870588235294118,0.866666666666667,0.862745098039216,0.858823529411765,
    0.854901960784314,0.850980392156863,0.847058823529412,0.843137254901961,
    0.83921568627451,0.835294117647059,0.831372549019608,0.827450980392157,
    0.823529411764706,0.819607843137255,0.815686274509804,0.811764705882353,
    0.807843137254902,0.803921568627451,0.8,0.796078431372549,
    0.792156862745098,0.788235294117647,0.784313725490196,0.780392156862745,
    0.776470588235294,0.772549019607843,0.768627450980392,0.764705882352941,
    0.76078431372549,0.756862745098039,0.752941176470588,0.749019607843137,
    0.745098039215686,0.741176470588235,0.737254901960784,0.733333333333333,
    0.729411764705882,0.725490196078431,0.72156862745098,0.717647058823529,
    0.713725490196078,0.709803921568627,0.705882352941177,0.701960784313725,
    0.698039215686274,0.694117647058824,0.690196078431373,0.686274509803922,
    0.682352941176471,0.67843137254902,0.674509803921569,0.670588235294118,
    0.666666666666667,0.662745098039216,0.658823529411765,0.654901960784314,
    0.650980392156863,0.647058823529412,0.643137254901961,0.63921568627451,
    0.635294117647059,0.631372549019608,0.627450980392157,0.623529411764706,
    0.619607843137255,0.615686274509804,0.611764705882353,0.607843137254902,
    0.603921568627451,0.6,0.596078431372549,0.592156862745098,
    0.588235294117647,0.584313725490196,0.580392156862745,0.576470588235294,
    0.572549019607843,0.568627450980392,0.564705882352941,0.56078431372549,
    0.556862745098039,0.552941176470588,0.549019607843137,0.545098039215686,
    0.541176470588235,0.537254901960784,0.533333333333333,0.529411764705882,
    0.525490196078431,0.52156862745098,0.517647058823529,0.513725490196078,
    0.509803921568627,0.505882352941176,0.501960784313725,0.501960784313725
  };

  const Rcpp::NumericVector cm_blue = {
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1
  };

  // const Rcpp::List cm = Rcpp::List::create(
  //   _["r"] = cm_red,
  //   _["g"] = cm_green,
  //   _["b"] = cm_blue
  // );
} // namespace palette
} // namepsace colourvalues

#endif
