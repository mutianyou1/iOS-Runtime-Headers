/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UITextInputControllerDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>
#import <UIKit/UIKeyInputPrivate.h>
#import <UIKit/UITextFieldContent.h>
#import <libobjc.A.dylib/NSUITextViewCommonMethods.h>
#import <UIKit/UIAutoscrollContainer.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UIKeyboardInput.h>

@class NSTextContainer, NSDictionary, UITextField, UIAutoscroll, NSAttributedString, UITextInputController, _UIFieldEditorLayoutManager, _UICascadingTextStorage, NSTimer, _UITextFieldCanvasView, NSString, UITextInputPasswordRules, NSLayoutManager, NSTextStorage, UITextRange, UITextPosition, UIView, NSIndexSet, UIColor, UIImage, UIInputContextHistory, UITextInteractionAssistant, RTIInputSystemSourceSession;

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, UIKeyInputPrivate, UITextFieldContent, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextInputPrivate, UITextAutoscrolling, UIKeyboardInput> {

	UITextField* _textField;
	BOOL _active;
	UIAutoscroll* _autoscroll;
	NSAttributedString* _originalAttributedString;
	NSDictionary* _originalDefaultAttributes;
	UIEdgeInsets _contentInsetsFromFonts;
	UITextInputController* __textInputController;
	NSTextContainer* __textContainer;
	_UIFieldEditorLayoutManager* __layoutManager;
	_UICascadingTextStorage* __textStorage;
	struct {
		unsigned delegateRespondsToFieldEditorDidChange : 1;
		unsigned delegateRespondsToFieldEditorDidChangeSelection : 1;
		unsigned delegateRespondsToShouldInsertText : 1;
		unsigned delegateRespondsToShouldReplaceWithText : 1;
		unsigned suppressScrollToSelection : 1;
		unsigned clearOnNextEdit : 1;
		unsigned needsInvalidationAfterObscuredRangeChange : 1;
		unsigned isAnimatingPaste : 1;
		unsigned contentInsetsFromFontsValid : 1;
	}  _feFlags;
	UIEdgeInsets _padding;
	NSRange _unobscuredSecureRange;
	unsigned long long _obscuredSecureLength;
	NSTimer* _obscureAllTextTimer;
	double _desiredContentWidth;
	_UITextFieldCanvasView* _contentView;
	_UITextFieldCanvasView* _passcodeStyleCutoutView;
	BOOL _allowsAttachments;
	BOOL __shouldObscureNextInput;
	/*^block*/id _scrollAnimationEndedAction;
	CGPoint _autoscrollContentOffset;

}

@property (setter=_setScrollAnimationEndedAction:,nonatomic,copy) id _scrollAnimationEndedAction;              //@synthesize scrollAnimationEndedAction=_scrollAnimationEndedAction - In the implementation block
@property (assign,nonatomic) CGPoint autoscrollContentOffset;                                                  //@synthesize autoscrollContentOffset=_autoscrollContentOffset - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (assign,nonatomic) UIEdgeInsets padding;                                                             //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL _shouldObscureNextInput;                                                     //@synthesize _shouldObscureNextInput=__shouldObscureNextInput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isSingleLineDocument; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,readonly) NSLayoutManager * layoutManager; 
@property (nonatomic,readonly) NSTextStorage * textStorage; 
@property (nonatomic,readonly) NSTextContainer * textContainer; 
@property (assign,nonatomic) long long nonEditingLinebreakMode; 
@property (assign,nonatomic) BOOL allowsAttachments;                                                           //@synthesize allowsAttachments=_allowsAttachments - In the implementation block
@property (nonatomic,readonly) long long layoutOrientation; 
@property (assign,nonatomic) NSRange markedRange; 
@property (nonatomic,readonly) NSDictionary * markedTextStyle; 
@property (assign,nonatomic) BOOL shouldAutoscroll; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL useAutomaticEndpointing; 
@property (assign,nonatomic) BOOL showDictationButton; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL forceFloatingKeyboard; 
@property (assign,nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) long long selectionGranularity; 
@property (nonatomic,readonly) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate; 
@property (assign,nonatomic) long long _textInputSource; 
@property (nonatomic,readonly) RTIInputSystemSourceSession * _rtiSourceSession; 
@property (nonatomic,readonly) BOOL supportsImagePaste; 
+(id)excludedElementsForHTML;
+(id)sharedFieldEditor;
+(id)activeFieldEditor;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(NSLayoutManager *)layoutManager;
-(id)_layoutManager;
-(NSTextStorage *)textStorage;
-(id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2 ;
-(long long)layoutOrientation;
-(id)linkTextAttributes;
-(CGRect)visibleRect;
-(CGPoint)textContainerOrigin;
-(NSTextContainer *)textContainer;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)invalidateTextContainerOrigin;
-(void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1 ;
-(void)setConstrainedFrameSize:(CGSize)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2 ;
-(NSRange)markedRange;
-(NSDictionary *)markedTextStyle;
-(long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3 ;
-(CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 glyphPosition:(CGPoint)arg5 characterIndex:(unsigned long long)arg6 ;
-(id)_textStorage;
-(id)_textContainer;
-(unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const unsigned long long*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(BOOL)isFirstResponder;
-(UIEdgeInsets)textContainerInset;
-(void)setTextContainer:(NSTextContainer *)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(NSDictionary *)typingAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)font;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(id)textField;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(void)setContentOffset:(CGPoint)arg1 ;
-(UIView *)textInputView;
-(void)drawRect:(CGRect)arg1 ;
-(id)_canvasView;
-(id)textColor;
-(id)textInputTraits;
-(void)setDisplaySecureEditsUsingPlainText:(BOOL)arg1 ;
-(id)_textInputTraits;
-(void)deleteBackward;
-(BOOL)isEditing;
-(UITextRange *)selectedTextRange;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(UITextPosition *)beginningOfDocument;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(BOOL)hasMarkedText;
-(UITextRange *)markedTextRange;
-(void)unmarkText;
-(id)textInRange:(id)arg1 ;
-(id)attributedTextInRange:(id)arg1 ;
-(void)replaceRange:(id)arg1 withAttributedText:(id)arg2 ;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)insertText:(id)arg1 ;
-(NSRange)insertFilteredText:(id)arg1 ;
-(void)insertAttributedText:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)setAttributedMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)_inputController;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id<UITextInputDelegate>)inputDelegate;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)_applyCorrectTextContainerSize;
-(void)activateEditor;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg1 ;
-(UIEdgeInsets)_contentInsetsFromFonts;
-(id)selectionRectsForRange:(id)arg1 ;
-(UIEdgeInsets)padding;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(id)undoManager;
-(BOOL)hasText;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)insertTextPlaceholderWithSize:(CGSize)arg1 ;
-(void)removeTextPlaceholder:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)_selectionClipRect;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)_isPasscodeStyle;
-(id)metadataDictionariesForDictationResults;
-(UITextInteractionAssistant *)interactionAssistant;
-(id)_textSelectingContainer;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(NSRange)selectionRange;
-(void)selectAll;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)textColorForCaretSelection;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)cancelAutoscroll;
-(void)_performWhileSuppressingDelegateNotifications:(/*^block*/id)arg1 ;
-(BOOL)_shouldIgnoreAutofillSave;
-(CGRect)_responderExternalTouchRectForWindow:(id)arg1 ;
-(id)_responderForBecomeFirstResponder;
-(BOOL)_shouldObscureInput;
-(BOOL)drawsAsAtom;
-(int)atomStyle;
-(CGRect)contentFrameForView:(id)arg1 ;
-(void)updateAutoscroll:(id)arg1 ;
-(void)setSelection:(NSRange)arg1 ;
-(NSRange)_unobscuredSecureRange;
-(double)_passcodeStyleAlpha;
-(id)initWithTextField:(id)arg1 ;
-(void)_applyCorrectTextContainerSize:(id)arg1 ;
-(void)_textStorageDidProcessEditing:(id)arg1 ;
-(void)_tvUpdateTextColor;
-(void)_setNeedsInvalidateAfterObscuredRangeChange;
-(UIEdgeInsets)_fullContentInsetsFromFonts;
-(void)_invalidateAfterObscuredRangeChangeIfNeeded;
-(BOOL)setUpClippingWithMaskForBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 ;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3 ;
-(void)_cancelObscureAllTextTimer;
-(void)_deactivateSelectionView;
-(void)_resetTypingAttributes;
-(void)_handleObscuredTextAfterActivationChange;
-(void)_adaptToPasscodeStyleIfNeeded;
-(id)_textInputController;
-(void)_updateLayoutManagerStyleEffectConfiguration;
-(void)_obscureAllText;
-(void)_setValue:(id)arg1 forTextAttribute:(id)arg2 ;
-(void)_setAttributedTextInRange:(NSRange)arg1 replacementText:(id)arg2 andSetCaretSelectionAfterText:(BOOL)arg3 ;
-(void)_setTextInRange:(NSRange)arg1 replacementText:(id)arg2 andSetCaretSelectionAfterText:(BOOL)arg3 ;
-(void)addTextAlternativesDisplayStyle:(long long)arg1 toRange:(NSRange)arg2 ;
-(id)_scrollAnimationEndedAction;
-(void)_setScrollAnimationEndedAction:(/*^block*/id)arg1 ;
-(void)clearText;
-(BOOL)_clearOnEditIfNeeded;
-(BOOL)_shouldObscureNextInput;
-(void)_unobscureTextInRange:(NSRange)arg1 settingTimerToReobscure:(BOOL)arg2 ;
-(void)set_shouldObscureNextInput:(BOOL)arg1 ;
-(void)_unobscureAllText;
-(BOOL)_hasDictationPlaceholder;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2 ;
-(void)textInputDidChange:(id)arg1 ;
-(NSRange)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(void)textInputDidChangeSelection:(id)arg1 ;
-(void)textInputWillAnimatePaste:(id)arg1 ;
-(void)textInputDidAnimatePaste:(id)arg1 ;
-(long long)nonEditingLinebreakMode;
-(void)setNonEditingLinebreakMode:(long long)arg1 ;
-(BOOL)allowsAttachments;
-(void)setAllowsAttachments:(BOOL)arg1 ;
-(CGSize)minSize;
-(BOOL)isHorizontallyResizable;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1 ;
-(void)setText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2 ;
-(void)setTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(void)setAttributedText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2 ;
-(void)setAttributedTextInRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 ;
-(unsigned long long)characterOffsetAtPoint:(CGPoint)arg1 ;
-(void)_ephemerallyUnobscureCharacterAtIndex:(unsigned long long)arg1 ;
-(void)_ephemerallyUnobscureTextInRange:(NSRange)arg1 ;
@end
