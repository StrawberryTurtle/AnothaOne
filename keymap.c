#include QMK_KEYBOARD_H

enum layers{
    BASE,
    SYM,
    NAV,
    MWS
};

    // BASE
    const uint16_t PROGMEM l[] = {KC_O,KC_N,COMBO_END};
    const uint16_t PROGMEM r[] = {KC_O,KC_H,COMBO_END};
    const uint16_t PROGMEM b[] = {KC_O,KC_A,COMBO_END};
    const uint16_t PROGMEM g[] = {KC_O,KC_E,COMBO_END};
    const uint16_t PROGMEM y[] = {KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM f[] = {KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM x[] = {KC_O,KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM q[] = {KC_O,KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM comm[] = {KC_H,KC_A,COMBO_END};
    const uint16_t PROGMEM dot[] = {KC_N,KC_E,COMBO_END};

    const uint16_t PROGMEM bqlsft[] = {LT(MWS,KC_SPC),KC_O,COMBO_END};

    const uint16_t PROGMEM blsft[] = {LT(MWS,KC_SPC),KC_O,KC_N,COMBO_END};
    const uint16_t PROGMEM blgui[] = {LT(MWS,KC_SPC),KC_O,KC_A,COMBO_END};
    const uint16_t PROGMEM bralt[] = {LT(MWS,KC_SPC),KC_O,KC_H,COMBO_END};
    const uint16_t PROGMEM blctl[] = {LT(MWS,KC_SPC),KC_O,KC_E,COMBO_END};

    const uint16_t PROGMEM blsftlgui[] = {LT(MWS,KC_SPC),KC_O,KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM blsftralt[] = {LT(MWS,KC_SPC),KC_O,KC_N,KC_H,COMBO_END};
    const uint16_t PROGMEM blsftlctl[] = {LT(MWS,KC_SPC),KC_O,KC_N,KC_E,COMBO_END};
    const uint16_t PROGMEM blguiralt[] = {LT(MWS,KC_SPC),KC_O,KC_A,KC_H,COMBO_END};
    const uint16_t PROGMEM blguilctl[] = {LT(MWS,KC_SPC),KC_O,KC_A,KC_E,COMBO_END};
    const uint16_t PROGMEM braltlctl[] = {LT(MWS,KC_SPC),KC_O,KC_H,KC_E,COMBO_END};

    const uint16_t PROGMEM btab[] = {LT(MWS,KC_SPC),KC_A,COMBO_END};
    const uint16_t PROGMEM bent[] = {LT(MWS,KC_SPC),KC_E,COMBO_END};
    const uint16_t PROGMEM bins[] = {KC_N,KC_H,COMBO_END};
    const uint16_t PROGMEM besc[] = {KC_A,KC_E,COMBO_END};

    // T
    const uint16_t PROGMEM u[] = {LT(SYM,KC_T),KC_A,COMBO_END};
    const uint16_t PROGMEM i[] = {LT(SYM,KC_T),KC_E,COMBO_END};
    const uint16_t PROGMEM d[] = {LT(SYM,KC_T),KC_N,COMBO_END};
    const uint16_t PROGMEM c[] = {LT(SYM,KC_T),KC_H,COMBO_END};
    const uint16_t PROGMEM s[] = {LT(SYM,KC_T),KC_O,COMBO_END};

    const uint16_t PROGMEM m[] = {LT(SYM,KC_T),KC_O,KC_N,COMBO_END};
    const uint16_t PROGMEM w[] = {LT(SYM,KC_T),KC_O,KC_H,COMBO_END};
    const uint16_t PROGMEM p[] = {LT(SYM,KC_T),KC_O,KC_A,COMBO_END};
    const uint16_t PROGMEM k[] = {LT(SYM,KC_T),KC_O,KC_E,COMBO_END};
    const uint16_t PROGMEM j[] = {LT(SYM,KC_T),KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM v[] = {LT(SYM,KC_T),KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM z[] = {LT(SYM,KC_T),KC_O,KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM coln[] = {LT(SYM,KC_T),KC_O,KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM grv[] = {LT(SYM,KC_T),KC_H,KC_A,COMBO_END};
    const uint16_t PROGMEM tild[] = {LT(SYM,KC_T),KC_N,KC_E,COMBO_END};

    // SYM
    const uint16_t PROGMEM quot[] = {KC_SCLN,KC_LCBR,COMBO_END};
    const uint16_t PROGMEM dqt[] = {KC_SCLN,KC_RCBR,COMBO_END};
    const uint16_t PROGMEM ampr[] = {KC_SCLN,KC_LBRC,COMBO_END};
    const uint16_t PROGMEM dlr[] = {KC_SCLN,KC_RBRC,COMBO_END};
    const uint16_t PROGMEM lprn[] = {KC_LCBR,KC_LBRC,COMBO_END};
    const uint16_t PROGMEM rprn[] = {KC_RCBR,KC_RBRC,COMBO_END};
    const uint16_t PROGMEM bsls[] = {KC_SCLN,KC_LCBR,KC_LBRC,COMBO_END};
    const uint16_t PROGMEM pipe[] = {KC_SCLN,KC_RCBR,KC_RBRC,COMBO_END};
    const uint16_t PROGMEM labk[] = {KC_RCBR,KC_LBRC,COMBO_END};
    const uint16_t PROGMEM rabk[] = {KC_LCBR,KC_RBRC,COMBO_END};

    const uint16_t PROGMEM slsft[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LCBR,COMBO_END};
    const uint16_t PROGMEM slgui[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LBRC,COMBO_END};
    const uint16_t PROGMEM sralt[] = {LT(MWS,KC_SPC),KC_SCLN,KC_RCBR,COMBO_END};
    const uint16_t PROGMEM slctl[] = {LT(MWS,KC_SPC),KC_SCLN,KC_RBRC,COMBO_END};

    const uint16_t PROGMEM slsftlgui[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LCBR,KC_LBRC,COMBO_END};
    const uint16_t PROGMEM slsftralt[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LCBR,KC_RCBR,COMBO_END};
    const uint16_t PROGMEM slsftlctl[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LCBR,KC_RBRC,COMBO_END};
    const uint16_t PROGMEM slguiralt[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LBRC,KC_RCBR,COMBO_END};
    const uint16_t PROGMEM slguilctl[] = {LT(MWS,KC_SPC),KC_SCLN,KC_LBRC,KC_RBRC,COMBO_END};
    const uint16_t PROGMEM sraltlctl[] = {LT(MWS,KC_SPC),KC_SCLN,KC_RCBR,KC_RBRC,COMBO_END};

    const uint16_t PROGMEM stab[] = {LT(MWS,KC_SPC),KC_LBRC,COMBO_END};
    const uint16_t PROGMEM sent[] = {LT(MWS,KC_SPC),KC_RBRC,COMBO_END};
    const uint16_t PROGMEM sins[] = {KC_LCBR,KC_RCBR,COMBO_END};
    const uint16_t PROGMEM sesc[] = {KC_LBRC,KC_RBRC,COMBO_END};

    // BSPC
    const uint16_t PROGMEM three[] = {LT(NAV,KC_BSPC),KC_A,COMBO_END};
    const uint16_t PROGMEM four[] = {LT(NAV,KC_BSPC),KC_E,COMBO_END};
    const uint16_t PROGMEM one[] = {LT(NAV,KC_BSPC),KC_N,COMBO_END};
    const uint16_t PROGMEM two[] = {LT(NAV,KC_BSPC),KC_H,COMBO_END};
    const uint16_t PROGMEM mins[] = {LT(NAV,KC_BSPC),KC_O,COMBO_END};

    const uint16_t PROGMEM five[] = {LT(NAV,KC_BSPC),KC_O,KC_N,COMBO_END};
    const uint16_t PROGMEM six[] = {LT(NAV,KC_BSPC),KC_O,KC_H,COMBO_END};
    const uint16_t PROGMEM seven[] = {LT(NAV,KC_BSPC),KC_O,KC_A,COMBO_END};
    const uint16_t PROGMEM eight[] = {LT(NAV,KC_BSPC),KC_O,KC_E,COMBO_END};
    const uint16_t PROGMEM nine[] = {LT(NAV,KC_BSPC),KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM zero[] = {LT(NAV,KC_BSPC),KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM eql[] = {LT(NAV,KC_BSPC),KC_O,KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM plus[] = {LT(NAV,KC_BSPC),KC_O,KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM astr[] = {LT(NAV,KC_BSPC),KC_H,KC_A,COMBO_END};
    const uint16_t PROGMEM slsh[] = {LT(NAV,KC_BSPC),KC_N,KC_E,COMBO_END};

    // BSPC SPC
    const uint16_t PROGMEM fthree[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_A,COMBO_END};
    const uint16_t PROGMEM ffour[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_E,COMBO_END};
    const uint16_t PROGMEM fone[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_N,COMBO_END};
    const uint16_t PROGMEM ftwo[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_H,COMBO_END};
    const uint16_t PROGMEM pscr[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,COMBO_END};

    const uint16_t PROGMEM ffive[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,KC_N,COMBO_END};
    const uint16_t PROGMEM fsix[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,KC_H,COMBO_END};
    const uint16_t PROGMEM fseven[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,KC_A,COMBO_END};
    const uint16_t PROGMEM feight[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,KC_E,COMBO_END};
    const uint16_t PROGMEM fnine[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM ften[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM feleven[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,KC_N,KC_A,COMBO_END};
    const uint16_t PROGMEM ftwelve[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_O,KC_H,KC_E,COMBO_END};
    const uint16_t PROGMEM briu[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_H,KC_A,COMBO_END};
    const uint16_t PROGMEM brid[] = {LT(NAV,KC_BSPC),LT(MWS,KC_SPC),KC_N,KC_E,COMBO_END};

    // NAV
    const uint16_t PROGMEM pgup[] = {KC_DEL,KC_UP,COMBO_END};
    const uint16_t PROGMEM pgdn[] = {KC_DEL,KC_DOWN,COMBO_END};
    const uint16_t PROGMEM home[] = {KC_DEL,KC_LEFT,COMBO_END};
    const uint16_t PROGMEM end[] = {KC_DEL,KC_RGHT,COMBO_END};
    const uint16_t PROGMEM copy[] = {KC_UP,KC_LEFT,COMBO_END};
    const uint16_t PROGMEM pste[] = {KC_DOWN,KC_RGHT,COMBO_END};
    const uint16_t PROGMEM volu[] = {KC_DEL,KC_UP,KC_LEFT,COMBO_END};
    const uint16_t PROGMEM vold[] = {KC_DEL,KC_DOWN,KC_RGHT,COMBO_END};
    const uint16_t PROGMEM hash[] = {KC_DOWN,KC_LEFT,COMBO_END};
    const uint16_t PROGMEM exlm[] = {KC_UP,KC_RGHT,COMBO_END};

    const uint16_t PROGMEM nlsft[] = {LT(MWS,KC_SPC),KC_DEL,KC_UP,COMBO_END};
    const uint16_t PROGMEM nlgui[] = {LT(MWS,KC_SPC),KC_DEL,KC_LEFT,COMBO_END};
    const uint16_t PROGMEM nralt[] = {LT(MWS,KC_SPC),KC_DEL,KC_DOWN,COMBO_END};
    const uint16_t PROGMEM nlctl[] = {LT(MWS,KC_SPC),KC_DEL,KC_RGHT,COMBO_END};

    const uint16_t PROGMEM nlsftlgui[] = {LT(MWS,KC_SPC),KC_DEL,KC_UP,KC_LEFT,COMBO_END};
    const uint16_t PROGMEM nlsftralt[] = {LT(MWS,KC_SPC),KC_DEL,KC_UP,KC_DOWN,COMBO_END};
    const uint16_t PROGMEM nlsftlctl[] = {LT(MWS,KC_SPC),KC_DEL,KC_UP,KC_RGHT,COMBO_END};
    const uint16_t PROGMEM nlguiralt[] = {LT(MWS,KC_SPC),KC_DEL,KC_LEFT,KC_DOWN,COMBO_END};
    const uint16_t PROGMEM nlguilctl[] = {LT(MWS,KC_SPC),KC_DEL,KC_LEFT,KC_RGHT,COMBO_END};
    const uint16_t PROGMEM nraltlctl[] = {LT(MWS,KC_SPC),KC_DEL,KC_DOWN,KC_RGHT,COMBO_END};

    const uint16_t PROGMEM ntab[] = {LT(MWS,KC_SPC),KC_LEFT,COMBO_END};
    const uint16_t PROGMEM nent[] = {LT(MWS,KC_SPC),KC_RGHT,COMBO_END};
    const uint16_t PROGMEM nins[] = {KC_UP,KC_DOWN,COMBO_END};
    const uint16_t PROGMEM nesc[] = {KC_LEFT,KC_RGHT,COMBO_END};

    // MWS
    const uint16_t PROGMEM whlu[] = {MS_BTN3,MS_UP,COMBO_END};
    const uint16_t PROGMEM whld[] = {MS_BTN3,MS_DOWN,COMBO_END};
    const uint16_t PROGMEM whll[] = {MS_BTN3,MS_LEFT,COMBO_END};
    const uint16_t PROGMEM whlr[] = {MS_BTN3,MS_RGHT,COMBO_END};
    const uint16_t PROGMEM btn4[] = {MS_UP,MS_LEFT,COMBO_END};
    const uint16_t PROGMEM btn5[] = {MS_DOWN,MS_RGHT,COMBO_END};
    const uint16_t PROGMEM acl0[] = {MS_BTN3,MS_UP,MS_LEFT,COMBO_END};
    const uint16_t PROGMEM acl1[] = {MS_BTN3,MS_DOWN,MS_RGHT,COMBO_END};

combo_t key_combos[] = {
    // BASE
    COMBO(l,KC_L),
    COMBO(r,KC_R),
    COMBO(b,KC_B),
    COMBO(g,KC_G),
    COMBO(y,KC_Y),
    COMBO(f,KC_F),
    COMBO(x,KC_X),
    COMBO(q,KC_Q),
    COMBO(comm,KC_COMM),
    COMBO(dot,KC_DOT),

    COMBO(bqlsft,OSM(MOD_LSFT)),

    COMBO(blsft,OSM(MOD_LSFT)),
    COMBO(blgui,OSM(MOD_LGUI)),
    COMBO(bralt,OSM(MOD_RALT)),
    COMBO(blctl,OSM(MOD_LCTL)),

    COMBO(blsftlgui,OSM(MOD_LSFT|MOD_LGUI)),
    COMBO(blsftralt,OSM(MOD_LSFT|MOD_RALT)),
    COMBO(blsftlctl,OSM(MOD_LSFT|MOD_LCTL)),
    COMBO(blguiralt,OSM(MOD_LGUI|MOD_RALT)),
    COMBO(blguilctl,OSM(MOD_LGUI|MOD_LCTL)),
    COMBO(braltlctl,OSM(MOD_RALT|MOD_LCTL)),

    COMBO(btab,KC_TAB),
    COMBO(bent,KC_ENT),
    COMBO(bins,KC_INS),
    COMBO(besc,KC_ESC),

    // T
    COMBO(u,KC_U),
    COMBO(i,KC_I),
    COMBO(d,KC_D),
    COMBO(c,KC_C),
    COMBO(s,KC_S),

    COMBO(m,KC_M),
    COMBO(w,KC_W),
    COMBO(p,KC_P),
    COMBO(k,KC_K),
    COMBO(j,KC_J),
    COMBO(v,KC_V),
    COMBO(z,KC_Z),
    COMBO(coln,KC_COLN),
    COMBO(grv,KC_GRV),
    COMBO(tild,KC_TILD),

    // SYM
    COMBO(quot,KC_QUOT),
    COMBO(dqt,KC_DQT),
    COMBO(ampr,KC_AMPR),
    COMBO(dlr,KC_DLR),
    COMBO(lprn,KC_LPRN),
    COMBO(rprn,KC_RPRN),
    COMBO(bsls,KC_BSLS),
    COMBO(pipe,KC_PIPE),
    COMBO(labk,KC_LABK),
    COMBO(rabk,KC_RABK),

    COMBO(slsft,OSM(MOD_LSFT)),
    COMBO(slgui,OSM(MOD_LGUI)),
    COMBO(sralt,OSM(MOD_RALT)),
    COMBO(slctl,OSM(MOD_LCTL)),

    COMBO(slsftlgui,OSM(MOD_LSFT|MOD_LGUI)),
    COMBO(slsftralt,OSM(MOD_LSFT|MOD_RALT)),
    COMBO(slsftlctl,OSM(MOD_LSFT|MOD_LCTL)),
    COMBO(slguiralt,OSM(MOD_LGUI|MOD_RALT)),
    COMBO(slguilctl,OSM(MOD_LGUI|MOD_LCTL)),
    COMBO(sraltlctl,OSM(MOD_RALT|MOD_LCTL)),

    COMBO(stab,KC_TAB),
    COMBO(sent,KC_ENT),
    COMBO(sins,KC_INS),
    COMBO(sesc,KC_ESC),

    // BSPC
    COMBO(three,KC_3),
    COMBO(four,KC_4),
    COMBO(one,KC_1),
    COMBO(two,KC_2),
    COMBO(mins,KC_MINS),

    COMBO(five,KC_5),
    COMBO(six,KC_6),
    COMBO(seven,KC_7),
    COMBO(eight,KC_8),
    COMBO(nine,KC_9),
    COMBO(zero,KC_0),
    COMBO(eql,KC_EQL),
    COMBO(plus,KC_PLUS),
    COMBO(astr,KC_ASTR),
    COMBO(slsh,KC_SLSH),

    // BSPC SPC
    COMBO(fthree,KC_F3),
    COMBO(ffour,KC_F4),
    COMBO(fone,KC_F1),
    COMBO(ftwo,KC_F2),
    COMBO(pscr,KC_PSCR),

    COMBO(ffive,KC_F5),
    COMBO(fsix,KC_F5),
    COMBO(fseven,KC_F7),
    COMBO(feight,KC_F8),
    COMBO(fnine,KC_F9),
    COMBO(ften,KC_F10),
    COMBO(feleven,KC_F11),
    COMBO(ftwelve,KC_F12),
    COMBO(briu,KC_BRIU),
    COMBO(brid,KC_BRID),

    // NAV
    COMBO(pgup,KC_PGUP),
    COMBO(pgdn,KC_PGDN),
    COMBO(home,KC_HOME),
    COMBO(end,KC_END),
    COMBO(copy,KC_COPY),
    COMBO(pste,KC_PSTE),
    COMBO(volu,KC_VOLU),
    COMBO(vold,KC_VOLD),
    COMBO(hash,KC_HASH),
    COMBO(exlm,KC_EXLM),

    COMBO(nlsft,OSM(MOD_LSFT)),
    COMBO(nlgui,OSM(MOD_LGUI)),
    COMBO(nralt,OSM(MOD_RALT)),
    COMBO(nlctl,OSM(MOD_LCTL)),

    COMBO(nlsftlgui,OSM(MOD_LSFT|MOD_LGUI)),
    COMBO(nlsftralt,OSM(MOD_LSFT|MOD_RALT)),
    COMBO(nlsftlctl,OSM(MOD_LSFT|MOD_LCTL)),
    COMBO(nlguiralt,OSM(MOD_LGUI|MOD_RALT)),
    COMBO(nlguilctl,OSM(MOD_LGUI|MOD_LCTL)),
    COMBO(nraltlctl,OSM(MOD_RALT|MOD_LCTL)),

    COMBO(ntab,KC_TAB),
    COMBO(nent,KC_ENT),
    COMBO(nins,KC_INS),
    COMBO(nesc,KC_ESC),

    COMBO(whlu,MS_WHLU),
    COMBO(whld,MS_WHLD),
    COMBO(whll,MS_WHLL),
    COMBO(whlr,MS_WHLR),
    COMBO(btn4,MS_BTN4),
    COMBO(btn5,MS_BTN5),
    COMBO(acl0,MS_ACL0),
    COMBO(acl1,MS_ACL1),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_3x6_3(
                                  KC_N,              KC_A,
        LT(MWS,KC_SPC),   KC_O,   KC_H,              KC_E,
                                  LT(NAV, KC_BSPC),  LT(SYM,KC_T)
    ),
    [SYM] = LAYOUT_3x6_3(
                                    KC_LCBR,  KC_LBRC,
        LT(MWS,KC_SPC),   KC_SCLN,  KC_RCBR,  KC_RBRC,
                                    KC_NO,    KC_NO
    ),
    [NAV] = LAYOUT_3x6_3(
                                    KC_UP,    KC_LEFT,
        LT(MWS,KC_SPC),   KC_DEL,   KC_DOWN,  KC_RGHT,
                                    KC_NO,    K_NO
    ),
    [MWS] = LAYOUT_3x6_3(
                          MS_UP,    MS_LEFT,
        KC_NO,  MS_BTN3,  MS_DOWN,  MS_RGHT,
                          MS_BTN2,  MS_BTN1
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
      case (BASE):
        gpio_write_pin_high(A0); // red LED on
        gpio_write_pin_low(A1); // green LED off
        combo_enable();
        break;
      case (SYM):
        gpio_write_pin_high(A0); // red LED on
        gpio_write_pin_high(A1); // green LED on
        break;
      case (NAV):
        gpio_write_pin_low(A0); // red LED off
        gpio_write_pin_low(A1); // green LED off
        break;
      default:
        gpio_write_pin_low(A0); // red LED off
        gpio_write_pin_low(A1); // green LED off
	    }
    return state;
}
