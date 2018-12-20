//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (BFKit)
+ (id)imageWithSize:(struct CGSize)arg1 backgroundColor:(id)arg2 maskedText:(id)arg3 font:(long long)arg4 fontSize:(double)arg5;
+ (id)imageFromText:(id)arg1 font:(long long)arg2 fontSize:(double)arg3 imageSize:(struct CGSize)arg4;
+ (id)imageWithColor:(id)arg1;
+ (struct CGSize)sizeForSizeString:(id)arg1;
+ (id)dummyImageNamed:(id)arg1;
- (id)blurImageWithBlur:(double)arg1;
- (id)boxBlurImageWithBlur:(double)arg1;
- (id)sepiaToneWithIntensity:(float)arg1;
- (id)cmykHalftone:(id)arg1 width:(float)arg2 angle:(float)arg3 sharpness:(float)arg4 gcr:(float)arg5 ucr:(float)arg6;
- (id)circularWrap:(id)arg1 radius:(float)arg2 angle:(float)arg3;
- (id)circleSplashDistortion:(id)arg1 radius:(float)arg2;
- (id)bumpDistortionLinear:(id)arg1 radius:(float)arg2 angle:(float)arg3 scale:(float)arg4;
- (id)bumpDistortion:(id)arg1 radius:(float)arg2 scale:(float)arg3;
- (id)bloom:(float)arg1 intensity:(float)arg2;
- (id)invertColors;
- (id)imageToBlackAndWhite;
- (id)imageToGrayscale;
- (_Bool)isGrayscale;
- (id)fillAlphaWithColor:(id)arg1;
- (id)fillAlpha;
- (id)removeAlpha;
- (_Bool)hasAlpha;
- (id)flipImageVertically;
- (id)flipImageHorizontally;
- (id)imageRotatedByDegrees:(double)arg1;
- (id)imageRotatedByRadians:(double)arg1;
- (id)imageByScalingToSize:(struct CGSize)arg1;
- (id)imageByScalingProportionallyToSize:(struct CGSize)arg1;
- (id)imageByScalingProportionallyToMaximumSize:(struct CGSize)arg1;
- (id)imageByScalingProportionallyToMinimumSize:(struct CGSize)arg1;
- (id)imageAtRect:(struct CGRect)arg1;
- (id)maskWithImage:(id)arg1;
- (id)maskWithImage:(id)arg1 andSize:(struct CGSize)arg2;
- (id)blendOverlay;
- (id)blendMode:(int)arg1;
@end

