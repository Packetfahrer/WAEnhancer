//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class UIImage, UIImageView, WATranslucentTableViewCell;

@protocol WATranslucentTableViewCellDelegate <NSObject>
- (UIImage *)translucentTableViewBlurredImage:(WATranslucentTableViewCell *)arg1;
- (UIImageView *)translucentTableViewCellBackgroundImageView:(WATranslucentTableViewCell *)arg1;
@end
