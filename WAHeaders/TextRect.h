//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

__attribute__((visibility("hidden")))
@interface TextRect : NSObject
{
    int _line;
    struct _NSRange _range;
    struct CGRect _rect;
}

+ (id)rectWithRect:(struct CGRect)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) int line; // @synthesize line=_line;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)initWithRect:(struct CGRect)arg1 range:(struct _NSRange)arg2;

@end
