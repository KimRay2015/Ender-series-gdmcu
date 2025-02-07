/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Spanish
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */

namespace Language_es {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Spanish");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" Listo");
  PROGMEM Language_Str MSG_MARLIN                          = _UxGT("Marlin");
  PROGMEM Language_Str MSG_YES                             = _UxGT("Si");
  PROGMEM Language_Str MSG_NO                              = _UxGT("No");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Vuelve");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Abortando...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("SD Insertada");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("SD removida");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Espera por tarjeta");
  PROGMEM Language_Str MSG_SD_INIT_FAIL                    = _UxGT("Fallo al iniciar SD");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Error al leerSD");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT(" USB tarjetaRetirado");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Fallo en USB");
  PROGMEM Language_Str MSG_KILL_SUBCALL_OVERFLOW           = _UxGT("Desbordamiento de subllamada");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Fincarrera"); // Max length 8 characters
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Fincarrera suave");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT(" Principal");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Config. Avanzadas");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Configuración");
  PROGMEM Language_Str MSG_RUN_AUTO_FILES                  = _UxGT("Inicio Automático");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Detiene Motores");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Menu demanejar");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Prueba de progreso");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Auto Home");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Origen Eje X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Origen Eje Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Origen Eje Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Auto alinear en Z");
  PROGMEM Language_Str MSG_ASSISTED_TRAMMING               = _UxGT("Recorrido asistido");
  PROGMEM Language_Str MSG_ITERATION                       = _UxGT("G34 Iteración: %i");
  PROGMEM Language_Str MSG_DECREASING_ACCURACY             = _UxGT("¡Precisión disminuyendo!");
  PROGMEM Language_Str MSG_ACCURACY_ACHIEVED               = _UxGT("Precisión conseguida");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Origen en XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Click para iniciar");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Siguiente punto");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Nivelación terminado");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Desvanece laaltura");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Ajusta offsets");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Offsets aplicados");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Establece origen");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Precal. ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Precal. ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Precal. ") PREHEAT_1_LABEL _UxGT(" cumplir");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Precal. ") PREHEAT_1_LABEL _UxGT(" cumplir ~");
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Precal. ") PREHEAT_1_LABEL _UxGT(" todo");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Precal. ") PREHEAT_1_LABEL _UxGT(" cama");
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Precal. ") PREHEAT_1_LABEL _UxGT(" Confirma");

    PROGMEM Language_Str MSG_PREHEAT_M                    = _UxGT("Precal. $");
    PROGMEM Language_Str MSG_PREHEAT_M_H                  = _UxGT("Precal. $ ~");
    PROGMEM Language_Str MSG_PREHEAT_M_END                = _UxGT("Precal. $ cumplir");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E              = _UxGT("Precal. $ cumplir ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                = _UxGT("Precal. $ todo");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY            = _UxGT("Precal. $ cama");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS           = _UxGT("Precal. $ Confirma");
  #endif
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Precal. personal");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Enfriamiento");
  PROGMEM Language_Str MSG_CUTTER_FREQUENCY                = _UxGT("Frecuencia");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Control Láser");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Poder del Láser");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Contro Eje principal");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Poder de eje rotador");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Eje inverso");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Switch encendido");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Switch apagado");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Extruir");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Retracción");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Move ejes");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Nivelación de cama");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Nivela la cama");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Nivelar esquinas");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Siguiente esquina");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editor de Malla ");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Editar Malla");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Malla parada");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Punto de sondeo");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Índice de eje X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Índice de eje Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valor de eje Z");
  PROGMEM Language_Str MSG_CUSTOM_COMMANDS                 = _UxGT("Com. Personalizados");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("Sonda de prueba M48");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("Punto M48");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Desviación");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("INDEX Modelo");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Herramienta offsets");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto Parada");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplicación");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Copia espejada");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Control Total");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2ª Boquilla X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2ª Boquilla Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2ª Boquilla Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Haciendo G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Herramientas UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Unifica cama altura");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Punto de inclinación");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("funda malla manual");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Pone calce y medir");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Medir");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Remover y Medir Cama");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Movie al siguiente");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Activar UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Detener UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Temperatura de Cama");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Temperatura de Cama");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Temp.de boqiulla");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Temp.de boqiulla");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Editor de Malla ");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Edita Malla Personal");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Ajuste Fino de Malla");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Ed.de Malla terminar");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Funda Malla Personal");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Construir Malla");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_UBL_BUILD_MESH_M              = _UxGT("Crear Mallado ($)");
    PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M           = _UxGT("Valid. Mall. ($)");
  #endif
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Crear Mallado Frío");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Ajustar alt. Mallado");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Cantidad de altura");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Valid. Mallado");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Valid. Mall. perso.");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("Calentando Cama G26");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("Calenta Boquilla G26");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Alimentación manual");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Fija Larga de impri.");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Cumple alimentar ");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Cancelado");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Dejando G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Continua malla cama");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Nivelado de malla");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Nivela en 3 puntos");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Nivela de malla");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Nivelar Malla");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Puntos laterales");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Tipo de Mapa");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Exporta a Mesh Map");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Exporta a Host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Exporta  a CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Cierra copia de imp.");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Info. de UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Cantidad de Relleno");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Relleno manual");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Relleno Inteligente");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Relleno de Malla");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Invalidar todo");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Invalida mas cercana");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Afinar Todo");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Afinar mas cercano");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Guarda Malla");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Ranura de memoria");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Carga malla de cama");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Guarda malla de cama");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Malla %! listo");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Malla %! Guardo");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Sin almacenamiento");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Err: Al Guardar UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Err: Restaurar UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Z-offset:   ");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Z-offset Detenido  ");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("1. Paso a Paso UBL");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("2. Construir Malla Fría");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("3. Relleno Inteligente");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("4. Validar Malla");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("5. Ajuste fino total");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("6. Validar Malla");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("7. Ajuste fino total");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("8. Guarda malla de cama");
		 			 									   
  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Control de LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Luces");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Pre-establece luz");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Rojo");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Naranja");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Amarillo");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Verde");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Azul");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Indigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Violeta");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Blanco");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Por defecto");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Luces personalizadas");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Intensidad En Rojo");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Intensidad En verdes");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Intensidad en Azul");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Intensidad en Blanco");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Brillo");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Moviendo...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Ejes XY Libres");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Mover X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Mover Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Mover Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Extrusor");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Extrusor *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Boquilla muy frio");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("Mover %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Mover 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Mover 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Mover 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Velocidad");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Cama en Z");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Boquilla");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Boquilla ~");
  PROGMEM Language_Str MSG_NOZZLE_PARKED                   = _UxGT("Boquilla Aparcada");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Boquilla en Espera");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Cama");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Cabina");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Velocidad del Fan");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Velocidad del Fan =");
  PROGMEM Language_Str MSG_STORED_FAN_N                    = _UxGT("Fan almacenado  =  ");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Velocidad extra");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Velocidad extra =");
  PROGMEM Language_Str MSG_CONTROLLER_FAN                  = _UxGT("Controlador Vent.");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_IDLE_SPEED       = _UxGT("Velocidad en reposo");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_AUTO_ON          = _UxGT("Modo Auto");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_SPEED            = _UxGT("Velocidad Activa");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_DURATION         = _UxGT("Periodo de reposo");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Flujo");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Flujo ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Control");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT("Fact");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("AutoTemp");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Encendido");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Apagado");
  PROGMEM Language_Str MSG_PID_AUTOTUNE                    = _UxGT("PID Autoajuste");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  = _UxGT("PID Autoajuste");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Selecciona *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Acelerar");
  PROGMEM Language_Str MSG_JERK                            = _UxGT("Tasa de fluctuación");
  PROGMEM Language_Str MSG_VA_JERK                         = _UxGT("V") LCD_STR_A _UxGT("-flucta");
  PROGMEM Language_Str MSG_VB_JERK                         = _UxGT("V") LCD_STR_B _UxGT("-flucta");
  PROGMEM Language_Str MSG_VC_JERK                         = _UxGT("V") LCD_STR_C _UxGT("-flucta");
  PROGMEM Language_Str MSG_VE_JERK                         = _UxGT("V.flucta de extrudir");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Desviar de la Unión");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Velocidad");
  PROGMEM Language_Str MSG_VMAX_A                          = _UxGT("Vmax ") LCD_STR_A;
  PROGMEM Language_Str MSG_VMAX_B                          = _UxGT("Vmax ") LCD_STR_B;
  PROGMEM Language_Str MSG_VMAX_C                          = _UxGT("Vmax ") LCD_STR_C;
  PROGMEM Language_Str MSG_VMAX_E                          = _UxGT("Vmax ") LCD_STR_E;
  PROGMEM Language_Str MSG_VMAX_EN                         = _UxGT("Vmax *");
  PROGMEM Language_Str MSG_VMIN                            = _UxGT("Vmix");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("V. mínima de mover");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Aceleración");
  PROGMEM Language_Str MSG_AMAX_A                          = _UxGT("Amax ") LCD_STR_A;
  PROGMEM Language_Str MSG_AMAX_B                          = _UxGT("Amax ") LCD_STR_B;
  PROGMEM Language_Str MSG_AMAX_C                          = _UxGT("Amax ") LCD_STR_C;
  PROGMEM Language_Str MSG_AMAX_E                          = _UxGT("Amax ") LCD_STR_E;
  PROGMEM Language_Str MSG_AMAX_EN                         = _UxGT("Amax *");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("A-Retract");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("A-Recorrido");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Pasos/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT("Pasos/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT("Pasos/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT("Pasos/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("EPasos/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("* pasos/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Temperatura");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Movimiento");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filamento");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("Volumen de medir mm³");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Diámetro del cable");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Diámetro del cable *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Descarga en mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Alimentar en mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Avanzar K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Avanzar K*");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Contraste LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Guardar EEPROM");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Cargar EEPROM");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Rest. fábrica");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Inicializar EEPROM");
  PROGMEM Language_Str MSG_ERR_EEPROM_CRC                  = _UxGT("Err: EEPROM CRC");
  PROGMEM Language_Str MSG_ERR_EEPROM_INDEX                = _UxGT("Err: Índice EEPROM");
  PROGMEM Language_Str MSG_ERR_EEPROM_VERSION              = _UxGT("Err: Versión EEPROM");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("Actualizar SD/USB");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Resetear Impresora");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT("Recargar");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Pantalla de Inf.");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Preparar");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Ajustar");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Iniciar impresión");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Siguinte");
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Iniciar");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Parar");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Imprime");
  PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Reconfigura");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Cancela");
  PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Hecho");
  PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Vuelve");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  = _UxGT("Proceder");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pausar impresión");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Reanudar impresion");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Parar impresion");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Imprimiendo objeto");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Cancelar objeto");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Cancelar Objeto =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Recupera de cortes");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Imprimir desde SD");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Sin tarjeta SD");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Hibernacion...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Click para reanudar");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Impresion pausada");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Imprimiendo...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Impresion abortada");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("No mover");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("Matado");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("Parado");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retracción mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Intercambiar Re.mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retracción V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Elevación Z");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("Hop mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("S UnRet mm  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("UnRet V  ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("Retraccion Auto");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Intercambia longitud");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Purgar longitud");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Cambiar Herramienta");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Aumentar Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED        = _UxGT("Vel. de Cebado");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED      = _UxGT("Vel. de retracción");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Cambia filamento");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Cambia filamento *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Carga Filamento");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Carga Filamento*");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Descarga Filamento");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Descarga Filamento*");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Descarga todo");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Inic. Tarjeta SD");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Cambiar Tarjeta SD");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("Liberar Tarjeta SD");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Sonda Z fuera cama");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Factor de Sesgo");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Auto-Prueba");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Reinicia");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Estiba");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Desplega");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("Estiba moelo");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("Modo-5V");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("Modo-OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Modo-Guarda");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("Ajusta BLTouch a 5V");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("Ajusta BLTouch a OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Reportar Drenaje");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("CAMBA MODO BLTOUCH");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("Inic. TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Test Z compensacion");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Guarda");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("Desplega TouchMI");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Desplega Sonda-Z");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Estiba Sonda-Z");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Origen %s%s%s Prim.");
  PROGMEM Language_Str MSG_ZPROBE_OFFSETS                  = _UxGT("Desf. Sonda");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("Desf. Sonda X");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Desf. Sonda Y");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Desf. Sonda Z");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Paso corto X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Paso corto Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Paso corto Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Total");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Aborta FinCarrera");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Calefacción Fallida");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Err: Temp.redundar");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("ESCAPE TERMICOp.");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("ESCAPE TERMICO CAMA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("Esca.TERMICO CAMARA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Err: MAXTEMP");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Err: MINTEMP");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("IMPRESORA DETENIDA");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Porfavor Reiniciar");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("D");
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("H");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("M");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Calentando...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Enfriando...");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Calentando cama...");
  PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Enfriando cama...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Calentando cámara...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Enfriando cámara...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Calibración delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Calibrar X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Calibrar Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Calibrar Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Calibrar Centro");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Ajustes Delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Auto Calibración");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Funda altura delta");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Compensacion sonda Z");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Columna oblicua");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Altura");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Radio");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("Acerca de  maquina");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Info. De  maquina");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("Nivela en 3 puntos");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Nivelación lineal");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Nivelación bilineal");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Unifica cama nivel");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Nivelación de malla");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Maquina Estadistica ");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Info. de tarjeta");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termistores");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrusores");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Baudios");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protocolo");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                = _UxGT("Apagado:OFF");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 = _UxGT("Encendido:ON");

  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Luz cabina");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Brillo de luz");
  PROGMEM Language_Str MSG_KILL_EXPECTED_PRINTER           = _UxGT("IMPRESORA INCORRECTA");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT     			 = _UxGT("Número de imprimir");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS			 = _UxGT("Completado");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME      			 = _UxGT("Tiempo total de impr");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST   			 = _UxGT("Mayor tiempo de impr");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT  			 = _UxGT("Totoal Extruído");
		 			 									   
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Impresiones");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS   		   = _UxGT("Completado");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Total");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Más largo");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Extruído");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Temp. Mínima");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Temp. Máxima");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("F. Aliment.");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Fuerza de empuje");
  PROGMEM Language_Str MSG_DAC_PERCENT_X                   = _UxGT("X Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Driver %");
  PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("ERROR CONEX. TMC");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Escribe DAC EEPROM");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("CAMBIAR FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("IMPRESIÓN PAUSADA");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("CARGAR FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("DESCARGAR FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("OPC. REINICIO:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Cancela más");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Continua");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("  Boquilla: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Sin Sensor");
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("Distancia de Salida");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Fallo en Sonda");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Sondeo Fallado");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("Escoger Filamento");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE              = _UxGT("¡Actu. MMU Firmware!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("NO RESPONDE");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Reanudar Impresión");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Reanudando...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Cargar Filamento");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Cargar todo");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Cargar a Boquilla");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Expulsar Filamento");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Expulsar Filamento ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Descargar Filamento");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Cargando Fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Saca filamento...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Descargando Fil...");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Todo");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filamento ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Reiniciar MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Reiniciando MMU...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Remover, click");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Mezcla");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Componente =");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Mezclador");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Gradiente");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Gradiente completo");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Alternar Mezcla");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Ciclo de mezcla");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Gradiente de mezcla");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Gradiente Inverso");
  PROGMEM Language_Str MSG_ACTIVE_VTOOL                    = _UxGT("Activar V-tool");
  PROGMEM Language_Str MSG_START_VTOOL                     = _UxGT("Iniciar V-tool");
  PROGMEM Language_Str MSG_END_VTOOL                       = _UxGT("Finalizar V-tool");
  PROGMEM Language_Str MSG_GRADIENT_ALIAS                  = _UxGT("Alias V-tool");
  PROGMEM Language_Str MSG_RESET_VTOOLS                    = _UxGT("Reiniciar V-tools");
  PROGMEM Language_Str MSG_COMMIT_VTOOL                    = _UxGT("Commit V-tool Mix ");
  PROGMEM Language_Str MSG_VTOOLS_RESET                    = _UxGT("V-tools Were Reset ");
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Iniciar Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT("Finalizar Z:");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("Juegos");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Ladrillo");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invasores");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Laberinto");

  #if LCD_HEIGHT >= 4
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Presionar botón", "Reanuda la impresión"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Aparcando..."));
	  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Esperar por", "cambio de filamento", "iniciar"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Insertar filamento", "y presionar el botón", "para continuar"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Presionar el botón", "para calentar boquilla"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Calentando boquilla", "Porfavor espera..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_2_LINE("Esperar por", "descarga de filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_2_LINE("Esperar por", "carga de filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Esperar por", "purga de filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Click para terminar", "purga de filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_2_LINE("Esperar para imprimir", "a continuar..."));
  #else
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_1_LINE("Click para continuar"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Aparcando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Por favor espere..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Insertar y clickear"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_1_LINE("Click para calentar"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Calentando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Expulsando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Cargando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Purgando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_1_LINE("Click para finalizar"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Reanudando..."));
  #endif
  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("Drivers TMC");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Corriente del driver");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Umbral Híbrido");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Al origen sin sensor");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Modo paso a paso");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("Funciona StealthChop");
  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Reinicar");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" dentro:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Backlash");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Corrección");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Suavizado");

  PROGMEM Language_Str MSG_LEVEL_X_AXIS                    = _UxGT("Nivel Eje X");
  PROGMEM Language_Str MSG_AUTO_CALIBRATE                  = _UxGT("Auto Calibrar");
  PROGMEM Language_Str MSG_HEATER_TIMEOUT                  = _UxGT("T. de esp. Calent.");
  PROGMEM Language_Str MSG_REHEAT                          = _UxGT("Recalentar");
  PROGMEM Language_Str MSG_REHEATING                       = _UxGT("Recalentando...");
}
