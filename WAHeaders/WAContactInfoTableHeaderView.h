//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView;

__attribute__((visibility("hidden")))
@interface WAContactInfoTableHeaderView : UIView
{
    UIView *_profilePhotoView;
    UIImageView *_profilePhotoImageView;
    NSMutableArray *_detailLabels;
    BOOL _hasProfilePhoto;
    struct UIEdgeInsets _contentInset;
}

+ (id)contactDetailsFont;
+ (id)contactNameFont;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;

- (void)configureWithVCardDictionary:(id)arg1;
- (void)configureWithMergedContact:(id)arg1;
- (void)configureWithContactInfoNameUnit:(id)arg1 photoUnit:(id)arg2;
- (void)addOrganizationLabel:(id)arg1;
- (void)addJobDescriptionLabel:(id)arg1;
- (void)addNicknameLabel:(id)arg1;
- (void)addPhoneticNameLabel:(id)arg1;
- (void)addDisplaynameLabel:(id)arg1;
- (void)setupContactPicture:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

