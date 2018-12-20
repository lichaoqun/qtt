//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer;
@protocol LCFloatViewDelegate;

@interface LCFloatView : UIView
{
    id <LCFloatViewDelegate> _delegate;
    double _stayEdgeDistance;
    double _stayAnimationDuration;
    UIPanGestureRecognizer *_panGesture;
    struct CGRect _visibleRect;
}

+ (id)floatViewOnRect:(struct CGRect)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) double stayAnimationDuration; // @synthesize stayAnimationDuration=_stayAnimationDuration;
@property(nonatomic) double stayEdgeDistance; // @synthesize stayEdgeDistance=_stayEdgeDistance;
@property(nonatomic) __weak id <LCFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldStayAtLeft;
- (void)moveToScreenEdge;
- (struct CGRect)holdPositionOverScreenEdge:(struct CGRect)arg1;
- (void)movePosition:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

