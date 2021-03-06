//
//  BTextInputView.h
//  Chat SDK
//
//  Created by Benjamin Smiley-andrews on 25/09/2013.
//  Copyright (c) 2013 chatsdk.co All rights reserved. The Chat SDK is issued under the MIT liceense and is available for free at http://github.com/chat-sdk
//

#import <UIKit/UIKit.h>
#import "BTextInputDelegate.h"
#import <ChatSDK/bChatState.h>

@interface BTextInputView : UIToolbar<UITextViewDelegate> {
    UITextView * _textView;
    UIButton * _optionsButton;
    UILabel * _placeholderLabel;
    UIColor * _placeholderColor;
    UIColor * _textColor;
    
    BOOL _audioEnabled;
    BOOL _micButtonEnabled;
}

@property (weak, nonatomic, readwrite) id<BTextInputDelegate> messageDelegate;

//@property (nonatomic, readwrite) UITextView * textView;

@property (nonatomic, readwrite) NSInteger maxLines;
@property (nonatomic, readwrite) NSInteger minLines;
@property (nonatomic, readwrite) UIButton * optionsButton;
@property (nonatomic, readwrite) UIButton * sendButton;

-(void) setAudioEnabled: (BOOL) audioEnabled;
-(BOOL) resignFirstResponder;
-(void) becomeFirstResponder;

@end
