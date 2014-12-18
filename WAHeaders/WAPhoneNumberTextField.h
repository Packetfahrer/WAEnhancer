//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSString, UIFont, WAPhoneNumberTextFieldHelper;

__attribute__((visibility("hidden")))
@interface WAPhoneNumberTextField : UITextField
{
    WAPhoneNumberTextFieldHelper *_textFieldHelper;
    NSString *_countryCode;
    UIFont *_phoneNumberFont;
    id <WAPhoneNumberTextFieldDelegate> _textFieldDelegate;
}

@property(nonatomic) id <WAPhoneNumberTextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(retain, nonatomic) UIFont *phoneNumberFont; // @synthesize phoneNumberFont=_phoneNumberFont;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

- (void)reformatTextField;
- (void)setText:(id)arg1;
- (void)awakeFromNib;

@end
