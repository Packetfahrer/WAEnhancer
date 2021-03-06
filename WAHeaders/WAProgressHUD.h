//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface WAProgressHUD : UIView
{
    BOOL useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    BOOL isFinished;
    struct CGAffineTransform rotationTransform;
    BOOL square;
    BOOL dimBackground;
    BOOL taskInProgress;
    BOOL removeFromSuperViewOnHide;
    unsigned int animationType;
    id <WAProgressHUDDelegate> delegate;
    float opacity;
    UIColor *color;
    UIFont *labelFont;
    UIFont *detailsLabelFont;
    UIView *indicator;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    NSDate *showStarted;
    unsigned int mode;
    NSString *labelText;
    NSString *detailsLabelText;
    float progress;
     completionBlock;
    struct CGSize minSize;
    struct CGSize size;
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (unsigned int)hideAllHUDsForView:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)hideHUDForView:(id)arg1 animated:(BOOL)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(BOOL)arg2;
@property(copy)  completionBlock; // @synthesize completionBlock;
@property struct CGSize size; // @synthesize size;
@property float progress; // @synthesize progress;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
@property(copy) NSString *labelText; // @synthesize labelText;
@property unsigned int mode; // @synthesize mode;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain) UIView *customView; // @synthesize customView;
@property BOOL removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property BOOL taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property BOOL dimBackground; // @synthesize dimBackground;
@property float margin; // @synthesize margin;
@property(getter=isSquare) BOOL square; // @synthesize square;
@property struct CGSize minSize; // @synthesize minSize;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property(retain) UIColor *color; // @synthesize color;
@property float opacity; // @synthesize opacity;
@property id <WAProgressHUDDelegate> delegate; // @synthesize delegate;
@property unsigned int animationType; // @synthesize animationType;

- (void)setTransformForCurrentOrientation:(BOOL)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)updateUIForKeypath:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIndicators;
- (void)setupLabels;
- (void)cleanUp;
- (void)launchExecution;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id)arg2 onQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id)arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id)arg2 completionBlock:(id)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(id)arg2;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(BOOL)arg4;
- (void)done;
- (void)animationFinished:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)hideUsingAnimation:(BOOL)arg1;
- (void)showUsingAnimation:(BOOL)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hideDelayed:(id)arg1;
- (void)hide:(BOOL)arg1 afterDelay:(double)arg2;
- (void)hide:(BOOL)arg1;
- (void)show:(BOOL)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

