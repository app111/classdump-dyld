/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKPlayer.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@protocol GKLocalPlayerListener, GKAuthenticateViewController;
@class GKInvite, UIAlertView, NSString, NSInvocation, NSDictionary, NSDate, UIViewController, GKEventEmitter, NSArray;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding> {

	BOOL _authenticated;
	BOOL _authenticating;
	BOOL _didAuthenticate;
	BOOL _validatingAccount;
	BOOL _enteringForeground;
	BOOL _appUnrecognized;
	BOOL _newToGameCenter;
	/*^block*/ id _authenticateHandler;
	GKInvite* _acceptedInvite;
	/*^block*/ id _authenticationCompletionHandler;
	/*^block*/ id _validateAccountCompletionHandler;
	UIAlertView* _loginAlertView;
	UIAlertView* _currentAlert;
	NSString* _lastUsernameAttempted;
	NSString* _lastAccountNameAuthenticated;
	NSInvocation* _currentFriendRequestInvocation;
	unsigned _failedLogins;
	NSDictionary* _authenticateAlertDictionary;
	int _environment;
	NSString* _lastAuthPlayerID;
	NSDate* _lastAuthDate;
	UIViewController* _rootViewController;
	UIViewController* _activeViewController;
	GKEventEmitter<GKLocalPlayerListener>* _eventEmitter;
	UIViewController<GKAuthenticateViewController>* _signInViewController;

}

@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;                                          //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isUnderage,nonatomic,@dynamic,readonly) BOOL underage; 
@property (nonatomic,copy) id authenticateHandler;                                                               //@synthesize authenticateHandler=_authenticateHandler - In the implementation block
@property (nonatomic,readonly) NSArray * friends; 
@property (assign,getter=isAuthenticating,nonatomic) BOOL authenticating;                                        //@synthesize authenticating=_authenticating - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * accountName; 
@property (nonatomic,@dynamic,retain) NSString * firstName; 
@property (nonatomic,@dynamic,retain) NSString * lastName; 
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                          //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL canChangePhoto; 
@property (nonatomic,retain) NSString * lastUsernameAttempted;                                                   //@synthesize lastUsernameAttempted=_lastUsernameAttempted - In the implementation block
@property (nonatomic,retain) NSString * lastAccountNameAuthenticated;                                            //@synthesize lastAccountNameAuthenticated=_lastAccountNameAuthenticated - In the implementation block
@property (assign,getter=isPurpleBuddyAccount,nonatomic,@dynamic) BOOL purpleBuddyAccount; 
@property (assign,getter=isAppUnrecognized,nonatomic) BOOL appUnrecognized;                                      //@synthesize appUnrecognized=_appUnrecognized - In the implementation block
@property (nonatomic,readonly) int environment;                                                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL allowNearbyMultiplayer; 
@property (assign,getter=isNewToGameCenter,nonatomic) BOOL newToGameCenter;                                      //@synthesize newToGameCenter=_newToGameCenter - In the implementation block
@property (nonatomic,@dynamic,readonly) NSString * facebookUserID; 
@property (nonatomic,@dynamic,readonly) NSString * iCloudUserID; 
@property (getter=isFindable,nonatomic,@dynamic,readonly) BOOL findable; 
@property (nonatomic,retain) GKEventEmitter<GKLocalPlayerListener> * eventEmitter;                               //@synthesize eventEmitter=_eventEmitter - In the implementation block
@property (nonatomic,copy) id authenticationCompletionHandler;                                                   //@synthesize authenticationCompletionHandler=_authenticationCompletionHandler - In the implementation block
@property (nonatomic,copy) id validateAccountCompletionHandler;                                                  //@synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler - In the implementation block
@property (nonatomic,retain) UIAlertView * loginAlertView;                                                       //@synthesize loginAlertView=_loginAlertView - In the implementation block
@property (assign,nonatomic) UIAlertView * currentAlert;                                                         //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) NSInvocation * currentFriendRequestInvocation;                                      //@synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation - In the implementation block
@property (nonatomic,retain) NSString * lastAuthPlayerID;                                                        //@synthesize lastAuthPlayerID=_lastAuthPlayerID - In the implementation block
@property (nonatomic,retain) NSDate * lastAuthDate;                                                              //@synthesize lastAuthDate=_lastAuthDate - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticate;                                                               //@synthesize didAuthenticate=_didAuthenticate - In the implementation block
@property (assign,nonatomic) BOOL validatingAccount;                                                             //@synthesize validatingAccount=_validatingAccount - In the implementation block
@property (assign,nonatomic) BOOL enteringForeground;                                                            //@synthesize enteringForeground=_enteringForeground - In the implementation block
@property (assign,nonatomic) unsigned failedLogins;                                                              //@synthesize failedLogins=_failedLogins - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                                              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;                                            //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,retain) UIViewController<GKAuthenticateViewController> * signInViewController;              //@synthesize signInViewController=_signInViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * authenticateAlertDictionary;                                         //@synthesize authenticateAlertDictionary=_authenticateAlertDictionary - In the implementation block
+(id)localPlayer;
+(BOOL)supportsSecureCoding;
-(void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)reset:(id)arg1 ;
-(void)setEventEmitter:(id)arg1 ;
-(void)daemonFetchGameInvite:(id)arg1 ;
-(void)daemonCancelledGameInvite:(id)arg1 ;
-(void)daemonInviteeRespondedToGameInvite:(id)arg1 ;
-(void)daemonFetchTurnBasedEvent:(id)arg1 ;
-(void)setStatus:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)_addEmail:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)updateFromLocalPlayer:(id)arg1 ;
-(void)loadFriendsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadGameRecommendationsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)canChangePhoto;
-(void)showSettings;
-(void)authenticateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)addEmail:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)loadFriendRequests:(/*^block*/ id)arg1 ;
-(void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(/*^block*/ id)arg8 ;
-(BOOL)hasEmailAddress:(id)arg1 ;
-(void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)generateIdentityVerificationSignatureWithCompletionHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)authenticationCompletionHandler;
-(void)setAuthenticationCompletionHandler:(/*^block*/ id)arg1 ;
-(id)lastUsernameAttempted;
-(void)setLastUsernameAttempted:(id)arg1 ;
-(id)lastAccountNameAuthenticated;
-(void)setLastAccountNameAuthenticated:(id)arg1 ;
-(unsigned)failedLogins;
-(void)setFailedLogins:(unsigned)arg1 ;
-(id)authenticateAlertDictionary;
-(BOOL)isAppUnrecognized;
-(void)setAppUnrecognized:(BOOL)arg1 ;
-(void)registerListener:(id)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)unregisterAllListeners;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(void)loadFriendRecommendationsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)acceptedInvite;
-(void)setAcceptedInvite:(id)arg1 ;
-(void)setNewToGameCenter:(BOOL)arg1 ;
-(BOOL)isAuthenticated;
-(BOOL)isAuthenticating;
-(id)eventEmitter;
-(id)friends;
-(void)loadProfileWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)removeFriend:(id)arg1 block:(/*^block*/ id)arg2 ;
-(id)lastAuthDate;
-(id)lastAuthPlayerID;
-(BOOL)isNewToGameCenter;
-(/*^block*/ id)authenticateHandler;
-(BOOL)enteringForeground;
-(void)setDidAuthenticate:(BOOL)arg1 ;
-(void)setAuthenticating:(BOOL)arg1 ;
-(void)setValidatingAccount:(BOOL)arg1 ;
-(void)setLastAuthPlayerID:(id)arg1 ;
-(id)signInViewController;
-(void)setActiveViewController:(id)arg1 ;
-(id)activeViewController;
-(void)setSignInViewController:(id)arg1 ;
-(id)currentAlert;
-(void)setCurrentAlert:(id)arg1 ;
-(void)setLoginAlertView:(id)arg1 ;
-(BOOL)validatingAccount;
-(/*^block*/ id)validateAccountCompletionHandler;
-(void)setValidateAccountCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setEnteringForeground:(BOOL)arg1 ;
-(void)setAuthenticateAlertDictionary:(id)arg1 ;
-(void)setupMultiplayerNotifications;
-(void)setLastAuthDate:(id)arg1 ;
-(BOOL)didAuthenticate;
-(void)setAuthenticateHandler:(/*^block*/ id)arg1 ;
-(id)currentFriendRequestInvocation;
-(void)setCurrentFriendRequestInvocation:(id)arg1 ;
-(id)loginAlertView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setRootViewController:(id)arg1 ;
-(int)environment;
-(id)rootViewController;
-(void)setStatus:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
@end
