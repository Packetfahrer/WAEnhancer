//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface MBRoundProgressView : UIView
{
    float _progress;
    BOOL _annular;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(nonatomic, getter=isAnnular) BOOL annular;
@property(nonatomic) float progress;

@end
