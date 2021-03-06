/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextInputControllerDelegate.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>
#import <UIKit/NSUITextViewCommonMethods.h>
#import <UIKit/UIAutoscrollContainer.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UIKeyboardInput.h>

@class NSTextContainer, UITextRange, NSDictionary, UITextPosition, UIView, UITextInputController, UITextField, UIAutoscroll, _UIFieldEditorLayoutManager, _UICascadingTextStorage, _UIFieldEditorContentView, NSTimer;

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextAutoscrolling, UIKeyboardInput> {

	UITextInputController* _inputController;
	UITextField* _proxiedView;
	UIAutoscroll* _autoscroll;
	NSTextContainer* _textContainer;
	_UIFieldEditorLayoutManager* _layoutManager;
	_UICascadingTextStorage* _textStorage;
	struct {
		unsigned delegateRespondsToFieldEditorDidChange : 1;
		unsigned delegateRespondsToShouldInsertText : 1;
		unsigned delegateRespondsToShouldReplaceWithText : 1;
		unsigned suppressScrollToSelection : 1;
		unsigned clearOnNextEdit : 1;
	}  _feFlags;
	UIEdgeInsets _padding;
	_UIFieldEditorContentView* _contentView;
	NSRange _unobscuredSecureRange;
	NSTimer* _obscureLastCharacterTimer;
	CGPoint _textContainerOrigin;
	float _contentWidth;
	_UIFieldEditorContentView* _passcodeStyleCutoutView;
	CGPoint _autoscrollContentOffset;

}

@property (assign,nonatomic) CGPoint autoscrollContentOffset;                                     //@synthesize autoscrollContentOffset=_autoscrollContentOffset - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (assign,nonatomic) UIEdgeInsets padding;                                                //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) int layoutOrientation; 
@property (assign,nonatomic) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@property (assign,nonatomic,@dynamic) int autocapitalizationType; 
@property (assign,nonatomic,@dynamic) int autocorrectionType; 
@property (assign,nonatomic,@dynamic) int spellCheckingType; 
@property (assign,nonatomic,@dynamic) int keyboardType; 
@property (assign,nonatomic,@dynamic) int keyboardAppearance; 
@property (assign,nonatomic,@dynamic) int returnKeyType; 
@property (assign,nonatomic,@dynamic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic,@dynamic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
+(void)releaseSharedInstance;
+(id)activeFieldEditor;
+(id)sharedFieldEditor;
+(id)excludedElementsForHTML;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(id)arg1 ;
-(id)undoManager;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)style;
-(id)proxiedView;
-(id)_responderForBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(id)text;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1 ;
-(CGRect)contentFrameForView:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setAttributedText:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(BOOL)isEditing;
-(void)drawTextInRect:(CGRect)arg1 forContentView:(id)arg2 ;
-(void)setNotificationsDisabled:(BOOL)arg1 ;
-(void)becomeFieldEditorForView:(id)arg1 ;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(BOOL)_shouldObscureInput;
-(BOOL)_isPasscodeStyle;
-(id)interactionAssistant;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id)textInputTraits;
-(id)textColor;
-(CGRect)_selectionClipRect;
-(int)scrollXOffset;
-(void)cancelAutoscroll;
-(int)scrollYOffset;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3 ;
-(id)textInputView;
-(void)_cancelObscureLastCharacterTimer;
-(void)setTypingAttributes:(id)arg1 ;
-(id)_textInputTraits;
-(void)setSelection:(NSRange)arg1 ;
-(void)_obscureLastCharacter;
-(id)typingAttributes;
-(void)_setValue:(id)arg1 forTextAttribute:(id)arg2 ;
-(id)_textContainer;
-(void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2 ;
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2 ;
-(id)inputDelegate;
-(void)addTextAlternativesDisplayStyleToRange:(NSRange)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)drawsAsAtom;
-(int)atomStyle;
-(BOOL)hasText;
-(void)clearText;
-(id)_layoutManager;
-(CGPoint)textContainerOrigin;
-(NSRange)_unobscuredSecureRange;
-(BOOL)_clearOnEditIfNeeded;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setInputDelegate:(id)arg1 ;
-(id)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(id)_textStorage;
-(CGPoint)_textContainerOrigin;
-(NSRange)markedRange;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)_hasDictationPlaceholder;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2 ;
-(void)textInputDidChange:(id)arg1 ;
-(NSRange)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(void)textInputDidChangeSelection:(id)arg1 ;
-(unsigned)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const int*)arg3 characterIndexes:(const unsigned*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(int)layoutManager:(id)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned)arg3 ;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned)arg6 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(CGRect)visibleRect;
-(UIEdgeInsets)textContainerInset;
-(void)setConstrainedFrameSize:(CGSize)arg1 ;
-(void)invalidateTextContainerOrigin;
-(CGSize)minSize;
-(BOOL)isHorizontallyResizable;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2 ;
-(void)setTextContainer:(id)arg1 ;
-(int)layoutOrientation;
-(void)setLayoutOrientation:(int)arg1 ;
-(id)linkTextAttributes;
-(void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)selectAll;
-(id)_textSelectingContainer;
-(id)textColorForCaretSelection;
-(void)updateAutoscroll:(id)arg1 ;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 ;
-(NSRange)selectionRange;
-(void)revealSelection;
-(unsigned)characterOffsetAtPoint:(CGPoint)arg1 ;
-(BOOL)hasMarkedText;
-(BOOL)notificationsDisabled;
-(id)_inputController;
-(UIEdgeInsets)padding;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
@end

